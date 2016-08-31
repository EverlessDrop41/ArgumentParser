#ifndef _IG_Argument
#define _IG_Argument

#include <string>
#include "ArgumentName.hpp"

class Argument {
private:
    /* data */
    ArgumentName* name;
    std::string value;
public:
    Argument (ArgumentName* name, std::string value = "");
    std::string getValue();
    ArgumentName* getName();
};

#endif
