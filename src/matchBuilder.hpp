#pragma once

#include <string>

// project dependencies
#include "json.hpp"

class matchBuilder {
public:
    // Function to generate a random match based on the template
    nlohmann::json randomMatch() const;

private:
    // Internal function to remove first and last characters from a string
    std::string dropFirstAndLast(const std::string& str) const;

    // Internal function to get a random key from a JSON file
    static std::string getRandomFromJson(const std::string& filename);
};
