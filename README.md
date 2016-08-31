# Argument Parser
A simple C++ library to easily parse launch arguments

## Requirements
 - CMake 3.6.1
 - C++ 11 compiler
 
## How to use
1. Initialize the parser

```c++
#include <ArgumentParser.hpp>

int main(int argc, char const *argv[]) {
    ArgumentParser* parser = new ArgumentParser(argc, argv);
}
```

2. Get an argument
```c++
Argument* nameArg = parser->get(new ArgumentName("name", "N"));
```

`ArgumentName` is a class to allow for multiple options. 

In this example the arguments are `--name` and `-N`

3. Get the value
```c++
std::string nameArgValue = nameArg->getValue() << "\n";
```

4. Run the application with the arguments

`[appName] --argname value -short shortvalue`

If an argument is specified multiple times the first apecification is used

e.g. `[appName] --arg value1 --arg value2` => `arg ==value1`

This still applies if the short version of an argument is used

`auto a = ArgumentName("letter_a","A");`

`[appName] --letter_a value1 -A value2` => `a == value1`