#include <ArgumentParser.hpp>
#include <vector>

ArgumentParser::ArgumentParser(int argCount, const char **arguments) {
    //TODO: parse the arguments
    this->arguments = std::vector<Argument>();
}

ArgumentParser::~ArgumentParser() {
    //delete arguments;
}

