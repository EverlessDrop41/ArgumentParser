#include <string>
#include <Argument.hpp>
#include <iostream>

Argument::Argument(std::string longName, std::string shortName, std::string value) {
    this->longName = longName;
    this->shortName = shortName;
    this->value = value;
}

Argument::~Argument() {}

std::string Argument::getValue() {
    return value;
}

//Command should exclude the - and/or --
bool Argument::isCommandMatch(std::string command) {
    return command == longName || command == shortName;
}

std::string Argument::getRawCommandName(std::string command) {
    if (command.length() >= 2) {
        char second = command[1];
        if (second != '-') {
            return command.substr(1);
        } else {
            return command.substr(2);
        }
    } else {
        //TODO: Make better error
        throw 1;
    }
}
