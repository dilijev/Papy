#pragma once

#include <string>

// project dependencies
#include "dependencies/json.hpp"

class oceanBuilder {
public:
    // Function to generate a random match based on the template
    static nlohmann::json randomOcean();

private:
    // Internal function to remove first and last characters from a string
    std::string dropFirstAndLast(const std::string& str);

    // Internal function to get a random key from a JSON file
    static std::string getRandomFromJson();
};
