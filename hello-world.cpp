/**
 * File: hello_world.cpp
 * Purpose: Classic "Hello World" program in C++.
 *          Demonstrates basic C++ syntax and compiler setup.
 * Author: [Your Name]
 * Date: [Current Date]
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Function: main()
 * Purpose: Entry point of the program.
 *          Prints a personalized "Hello World" message.
 * Returns: 0 on successful execution.
 */
int main() {
    // Variables
    string name = "World";
    int year = 2026;
    vector<string> greetings = {
        "Hello, ",
        "Welcome to C++ programming!",
        "Let's build something amazing."
    };

    // Print header
    cout << "========================================" << endl;
    cout << "          HELLO WORLD" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // Loop through greetings
    for (const string& greeting : greetings) {
        cout << greeting << endl;
    }

    // Output the main message using expressions and conditionals
    cout << endl;
    cout << "Hello, " << name << "!" << endl;
    cout << "Year: " << year << endl;
    cout << endl;

    // Conditional: Check if year is current
    if (year == 2026) {
        cout << "This is the year of learning!" << endl;
    }

    cout << endl;
    cout << "========================================" << endl;
    cout << "          GOODBYE!" << endl;
    cout << "========================================" << endl;

    return 0;
}