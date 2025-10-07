#include "Ember.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc > 2) {
        std::cout << "Usage: ember [script]" << std::endl;
        return 64;
    } else if (argc == 2) {
        Ember::runFile(argv[1]);
    } else {
        Ember::runPrompt();
    }

    return 0;
}