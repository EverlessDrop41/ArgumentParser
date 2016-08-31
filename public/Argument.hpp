#ifndef _IG_Argument
#define _IG_Argument

#include <string>

class Argument {
private:
    /* data */
    std::string longName;
    std::string shortName;
    std::string value;
public:
    Argument (std::string longName, std::string shortName = "", std::string value = "");
    virtual ~Argument ();
    std::string getValue();
    bool isCommandMatch(std::string command);
    static std::string getRawCommandName(std::string command);
};

#endif
