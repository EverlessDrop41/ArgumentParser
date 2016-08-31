#include <ArgumentParser.hpp>
#include <vector>

ArgumentParser::ArgumentParser(int argCount, const char **arguments) {
    //TODO: parse the arguments
    this->arguments = std::vector<Argument>();

    if (argCount > 2) {
        for (int i = 1; i < argCount; i++) {
            std::string arg = arguments[i];
        }
    } else {
        //TODO handle no args
    }
}

ArgumentParser::~ArgumentParser() {
    //delete arguments;
}

Argument* ArgumentParser::get(ArgumentName *name) {
  //TODO: return the argument
};