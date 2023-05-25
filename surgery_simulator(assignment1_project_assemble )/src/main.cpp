#include <iostream>
#include "tools.h"

int main() {
    Point p1, p2; // Two points for operations

    // Perform surgery operations
    p1 = getPointFromUser(); // Function to get a point from the user

    // Perform operations based on user commands
    std::string command;
    std::cout << "Enter a command (scalpel, hemostat, tweezers, suture): ";
    std::cin >> command;

    if (command == "scalpel") {
        p2 = getPointFromUser(); // Get second point for scalpel operation
        performScalpelOperation(p1, p2); // Function to perform scalpel operation
    } else if (command == "hemostat") {
        performHemostatOperation(p1); // Function to perform hemostat operation
    } else if (command == "tweezers") {
        performTweezersOperation(p1); // Function to perform tweezers operation
    } else if (command == "suture") {
        p2 = getPointFromUser(); // Get second point for suture operation
        performSutureOperation(p1, p2); // Function to perform suture operation
    } else {
        std::cout << "Invalid command. Please try again." << std::endl;
    }

    return 0;
}
