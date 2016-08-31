//
// Created by Emily Peregrine on 31/08/2016.
//

#include <string>
#include <ArgumentName.hpp>

ArgumentName::ArgumentName(std::string longName, std::string shortName) {
    this->longName = longName;
    this->shortName = shortName;
}

bool ArgumentName::isMatch(std::string command) {
    command = ArgumentName::getRawArgumentName(command);
    return command == longName || command == shortName;
}

std::string ArgumentName::getRawArgumentName(std::string argumentName) {
    if (argumentName.length() >= 2) {
        char second = argumentName[1];
        if (second != '-') {
            return argumentName.substr(1);
        } else {
            return argumentName.substr(2);
        }
    } else {
        //TODO: Make better error
        //ERROR - Not an arg
        throw 1;
    }
}
