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
    if (ArgumentName::isArgument(argumentName)) {
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

bool ArgumentName::isArgument(std::string str) {
    auto strSize = str.size();
    if (strSize >= 2) {
        bool fIsDash = str[0] == '-';
        bool sIsDash = str[1] == '-';

        if (strSize >= 3) {
            bool tIsDash = str[2] == '-';
            return fIsDash && sIsDash && !tIsDash; //First and second are dashes but not third
        }

        return fIsDash && !sIsDash; //First is dash but not second
    } else {
        return false;
    }
}
