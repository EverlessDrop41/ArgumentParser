#include <ArgumentParser.hpp>
#include <vector>

ArgumentParser::ArgumentParser(int argCount, const char **arguments) {
    //TODO: parse the arguments
    this->arguments = std::vector<Argument>();

    if (argCount > 2) {
        for (int i = 1; i < argCount; i++) {
            std::string arg = arguments[i];
            ArgumentType argumentType = ArgumentName::getArgumentType(arg);
            if (argumentType != ArgumentType::NOT) {
                std::string argName = ArgumentName::getRawArgumentName(arg);
                std::string longName = (argumentType == ArgumentType::LONG) ? argName : "";
                std::string shortName = (argumentType == ArgumentType::SHORT) ? argName : "";

                ArgumentName *name = new ArgumentName(longName, shortName);

                Argument* argToAdd = nullptr;

                if (argCount > i+1 && ArgumentName::getArgumentType(arguments[i+1]) == ArgumentType::NOT) {
                    argToAdd = new Argument(name, arguments[i+1]);
                    i++;
                } else {
                    argToAdd = new Argument(name);
                }

                this->arguments.push_back(*argToAdd);
            }
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
    for (int i = 0; i < arguments.size(); i++) {
        ArgumentName* argName = arguments[i].getName();
        if (argName->isMatch(name)) {
            return &arguments[i];
        }
    }
    throw 404;
};