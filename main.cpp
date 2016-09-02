#include <iostream>
#include <ArgumentParser.hpp>

int main(int argc, char const *argv[]) {

    ArgumentParser* parser = new ArgumentParser(argc, argv);
    try {
        Argument* nameArg = parser->get(new ArgumentName("name", "N"));
        Argument* testArg = parser->get(new ArgumentName("test", "T"));

        std::cout << "Name arg: " << nameArg->getValue() << "\n";
        std::cout << "Test arg: " << testArg->getValue() << "\n";
    } catch (int e) {
        std::cerr << "\n\nArguments name and/or test was not found\n";
    }

    return 0;
}
