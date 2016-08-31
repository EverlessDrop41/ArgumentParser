#include <ArgumentParser.hpp>

ArgumentParser::ArgumentParser(int argCount, const char **arguments) {
    //TODO: parse the arguments
}

ArgumentParser::~ArgumentParser() {
    //delete arguments;
}

Argument * ArgumentParser::get(std::string name) {
    for (int i = 0; i < arguments.size(); i++) {
        Argument* arg = &arguments[i];
        if (arg->isCommandMatch(name)) {
            return arg;
        }
    }

    return NULL;
}
