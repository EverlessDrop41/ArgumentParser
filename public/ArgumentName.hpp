//
// Created by Emily Peregrine on 31/08/2016.
//

#ifndef _IG_ARGUMENTNAME
#define _IG_ARGUMENTNAME

#include <string>

class ArgumentName {
private:
    /* data */
    std::string longName;
    std::string shortName;
public:
    ArgumentName (std::string longName, std::string shortName = "");
    bool isMatch(std::string command);
    static std::string getRawArgumentName(std::string argumentName);
};

#endif
