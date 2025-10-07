#ifndef EMBER_H
#define EMBER_H

#include <string>
class Ember {
    public:
        static void runFile(const std::string& path);
        static void runPrompt();
    private:
        static void run(const std::string& source);
};

#endif // EMBER_H