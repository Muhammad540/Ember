#ifndef EMBER_H
#define EMBER_H

#include <string>
class Ember {
    public:
        /*Read Ember code from a file*/
        static void runFile(const std::string& path);
        /*Read Ember code from a CLI*/
        static void runPrompt();
        static void error(int line, const std::string& message);
        /*To Track if any error has during processing*/
        inline static bool hadError = false;
    private:
        /*Runs the file or prompt input*/
        static void run(const std::string& source);
        /*Report where the error occurs*/
        static void report(int line, const std::string& where, const std::string& message);
};

#endif // EMBER_H