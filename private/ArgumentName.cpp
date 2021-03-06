//
// Created by Emily Peregrine on 31/08/2016.
//

#include <string>
#include <ArgumentName.hpp>

ArgumentName::ArgumentName(std::string longName, std::string shortName) {
    this->longName = longName;
    this->shortName = shortName;
}

bool ArgumentName::isMatch(std::string argument) {
    argument = ArgumentName::getRawArgumentName(argument);

    return argument != "" &&
            (argument == longName || argument == shortName);
}

bool ArgumentName::isMatch(ArgumentName* name) {
    auto longNameStr = ArgumentName::getRawArgumentName(name->longName);
    auto shortNameStr = ArgumentName::getRawArgumentName(name->shortName);

    bool hasLongName = longNameStr != "";
    bool hasShortName = shortNameStr != "";

    bool longMatch = longNameStr == longName;
    bool shortMatch = shortNameStr == shortName;
    return (hasLongName && longMatch) || (hasShortName && shortMatch);
}

std::string ArgumentName::getRawArgumentName(std::string argumentName) {
    if (ArgumentName::getArgumentType(argumentName) != ArgumentType::NOT) {
        char second = argumentName[1];
        if (second != '-') {
            return argumentName.substr(1);
        } else {
            return argumentName.substr(2);
        }
    } else {
        //TODO: Make better error
        //ERROR - Not an arg
        //throw 1;
        return argumentName;
    }
}

ArgumentType ArgumentName::getArgumentType(std::string str) {
    auto strSize = str.size();
    if (strSize >= 2) {
        bool fIsDash = str[0] == '-';
        bool sIsDash = str[1] == '-';

        if (fIsDash) {
            if (sIsDash) {
                return ArgumentType::LONG;
            }
            return ArgumentType::SHORT;
        }
    }

    return ArgumentType::NOT;
}
