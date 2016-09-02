#include <string>
#include <Argument.hpp>
#include <iostream>


Argument::Argument(ArgumentName* name, std::string value) {
    this->name = name;
    this->value = value;
}

std::string Argument::getValue() {
    if (this != NULL) {
        return value;
    } else {
        throw 230;
    }

}

ArgumentName *Argument::getName() {
    if (this != NULL) {
        return name;
    } else {
        throw 230;
    }
}
