#include <string>
#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here

    bool modulo3 (int number) 
    {
        return number % 3 == 0;
    }

    bool modulo5 (int number) 
    {
        return number % 5 == 0;
    }

    bool modulo7 (int number) 
    {
        return number % 7 == 0;
    }

    std::string convert (int number)
    {
        std::string result;

        if (modulo3(number)) result += "Pling";
        if (modulo5(number)) result += "Plang";
        if (modulo7(number)) result += "Plong";

        return result.empty() ? std::to_string(number) : result;
        
    }
    
}  // namespace raindrops
