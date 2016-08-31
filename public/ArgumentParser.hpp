#ifndef _IG_ArgumentParser
#define _IG_ArgumentParser

#include <vector>
#include "Argument.hpp"

class ArgumentParser {
private:
  /* data */
    std::vector<Argument> arguments;
public:
    ArgumentParser (int argCount, char const *arguments[]);
    virtual ~ArgumentParser ();
    Argument* get(ArgumentName* name);
};

#endif
