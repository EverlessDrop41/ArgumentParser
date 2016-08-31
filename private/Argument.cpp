#include <string>
#include <Argument.hpp>
#include <iostream>


Argument::Argument(ArgumentName* name, std::string value) {
    this->name = name;
    this->value = value;
}

std::string Argument::getValue() {
    return value;
}
