#include <iostream>
#include "OverloadDemo.h"

void displayMenu() {
    std::cout << "\nMenu Options:\n";
    std::cout << "1. + operation (adds 5 for double and int | appends '-APP' to the string)\n";
    std::cout << "2. - operation (subtracts 5 for double and int | deletes the last 4 letters of the string)\n";
    std::cout << "3. * operation (multiplies by 2 for double and int | makes the string repeat itself(string -> stringstring))\n";
    std::cout << "4. / operation (divides by 2 for double and int | deletes the last half of the characters)\n";
    std::cout << "5. Prefix ++ operation (adds 1 for double and int | does nothing to the string)\n";
    std::cout << "6. Postfix ++ operation (adds 1 for double and int | does nothing to the string)\n";
    std::cout << "7. Prefix -- operation (subtracts 1 for double and int | does nothing to the string)\n";
    std::cout << "8. Postfix -- operation (subtracts 1 for double and int | does nothing to the string)\n";
    std::cout << "9. Quit\n";
}

int main() {
    OverloadDemo obj1, result;
    int choice;

    std::cout << "Welcome to the Overload Demo! This program demonstrates overloaded operators. Please enter your values.\n";

    int userInt;
    double userDouble;
    std::string userString;

    std::cout << "Enter intOne: ";
    std::cin >> userInt;
    obj1.setIntOne(userInt);

    std::cout << "Enter doubleOne: ";
    std::cin >> userDouble;
    obj1.setDoubleOne(userDouble);

    std::cout << "Enter stringOne: ";
    std::cin >> userString;
    obj1.setStringOne(userString);

    displayMenu();

    do {
        std::cout << "\nSelect an option: ";
        std::cin >> choice;

        switch (choice) {
            case 1: obj1 = obj1 + obj1; result = obj1; break;
            case 2: obj1 = obj1 - obj1; result = obj1; break;
            case 3: obj1 = obj1 * obj1; result = obj1; break;
            case 4: obj1 = obj1 / obj1; result = obj1; break;
            case 5: ++obj1; result = obj1; break;
            case 6: obj1++; result = obj1; break;
            case 7: --obj1; result = obj1; break;
            case 8: obj1--; result = obj1; break;
            case 9: std::cout << "Goodbye!\n"; break;
            default: std::cout << "Invalid choice. Please try again.\n"; break;
        }

        if (choice >= 1 && choice <= 8) {
            std::cout << "\nResults:\n";
            std::cout << "intOne: " << result.getIntOne() << "\n";
            std::cout << "doubleOne: " << result.getDoubleOne() << "\n";
            std::cout << "stringOne: " << result.getStringOne() << "\n";
        }
    } while (choice != 9);

    return 0;
}
