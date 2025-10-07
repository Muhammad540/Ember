#include "Ember.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
// #include "scanner.hpp"


void Ember::runFile(const std::string& path) {
    std::ifstream file(path);
    if (!file.is_open()) {
        std::cerr << "Could not open the file" << path << std::endl;
        std::exit(74);
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    run(buffer.str());
}

void Ember::runPrompt() {
    std::string line;

    while(true) {
        std::cout << "> ";
        if (!std::getline(std::cin, line)) {
            break;
        }
        run(line);
    }
}

void Ember::run(const std::string& source){
    // Scanner scanner(source);
    // std::vector<Token> tokens = scanner.scanTokens();

    //TODO: For now just print the tokens
    //for (const Token& token: Tokens) {
    //    std::cout << token << std::endl;
    //}

    //TODO: placeholder until scanner is implemented (Remove it)
    std::cout << "Running: " << source << std::endl;
}