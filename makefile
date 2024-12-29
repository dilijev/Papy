# Compiler and flags
CXX = g++
ifeq ($(shell uname), Darwin)
    CXXFLAGS = -std=c++2b  # macOS-specific flags
else
    CXXFLAGS = -std=c++23  # Default flags
endif

# Directories
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
OPENSSL_DIR = $(SRC_DIR)/openssl/include  # Local OpenSSL directory

LDFLAGS = -L$(OPENSSL_DIR) -lssl -lcrypto  # Link local OpenSSL libraries

# Source files and object files
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Output executable
TARGET = $(BIN_DIR)/papy

# Default target to build
all: directories $(TARGET)

# Create required directories if they don't exist
directories:
	@mkdir -p $(OBJ_DIR) $(BIN_DIR)

# Link object files to create the executable
$(TARGET): $(OBJ_FILES)
	$(CXX) $(OBJ_FILES) -o $@ $(LDFLAGS)  # Link OpenSSL libraries

$(OBJ_DIR)/apiClient.o: $(SRC_DIR)/apiClient.cpp
	$(CXX) $(CXXFLAGS) -I$(OPENSSL_DIR) -c $< -o $@

# Rule to recompile .o files when .hpp files change
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(SRC_DIR)/%.hpp | directories
	$(CXX) $(CXXFLAGS) -c $< -o $@

# # Dummy target to touch .cpp files when .hpp files change
# $(SRC_DIR)/%.cpp: $(SRC_DIR)/%.hpp
# 	@echo $<

# Rule to compile .cpp to .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | directories
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up object files and executable
clean:
	rm -rf $(OBJ_DIR)/*.o $(TARGET)

# Rebuild the project
rebuild: clean all

# Install (optional, you can customize)
install:
	cp $(TARGET) /usr/local/bin/

.PHONY: all clean rebuild install directories
