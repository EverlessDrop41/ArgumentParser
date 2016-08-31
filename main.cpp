#include <iostream>
#include <ArgumentParser.hpp>

int main(int argc, char const *argv[]) {

    ArgumentParser* parser = new ArgumentParser(argc, argv);

    Argument* nameArg = parser->get(new ArgumentName("name", "N"));
    Argument* testArg = parser->get(new ArgumentName("test", "T"));

    std::cout << "Name arg: " << nameArg->getValue() << "\n";
    std::cout << "Test arg: " << testArg->getValue() << "\n";
    return 0;
}
