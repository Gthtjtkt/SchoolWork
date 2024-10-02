//Main.cpp

/*
Contains the main logic and interface for the program
*/

#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

#include <iostream>
#include <string>

int main() {
    std::string senderName, senderAddress, senderCity, senderState;
    int senderZip, receiverZip;
    double weight, costPerOunce, twoDayFee, overnightRate;
   
    std::cout << "Hello! This program is for calculating shipping costs of packages. You will be asked to give information,\n";
    std::cout << "and then the program will calculate the potential costs of shipping in a Shipping Report.\n";

    std::cout << "Please enter the following shipping information:\n";
    std::cout << "Enter sender's name: ";
    std::getline(std::cin, senderName);
    std::cout << "Enter sender's address: ";
    std::getline(std::cin, senderAddress);
    std::cout << "Enter sender's city: ";
    std::getline(std::cin, senderCity);
    std::cout << "Enter sender's state: ";
    std::getline(std::cin, senderState);
    std::cout << "Enter sender's zip code: ";
    std::cin >> senderZip;
    std::cout << "Enter receiver's zip code: ";
    std::cin >> receiverZip;
    std::cout << "Enter package weight (in ounces): ";
    std::cin >> weight;
    std::cout << "Enter cost per ounce: ";
    std::cin >> costPerOunce;

    std::cout << "\nFor additional shipping options: \n";
    std::cout << "Enter flat fee for two-day shipping: ";
    std::cin >> twoDayFee;
    std::cout << "Enter additional cost per ounce for overnight shipping: ";
    std::cin >> overnightRate;

    Package package(senderName, senderAddress, senderCity, senderState, senderZip, receiverZip, weight, costPerOunce);
    TwoDayPackage twoDayPackage(senderName, senderAddress, senderCity, senderState, senderZip, receiverZip, weight, costPerOunce, twoDayFee);
    OvernightPackage overnightPackage(senderName, senderAddress, senderCity, senderState, senderZip, receiverZip, weight, costPerOunce, overnightRate);

    std::cout << "\n========================================\n";
    std::cout << "           Package Shipping Report       \n";
    std::cout << "----------------------------------------\n";
    std::cout << "Sender Name: " << senderName << "\n";
    std::cout << "Sender Address: " << senderAddress << "\n";
    std::cout << "Sender City: " << senderCity << "\n";
    std::cout << "Sender State: " << senderState << "\n";
    std::cout << "Sender Zip Code: " << senderZip << "\n";
    std::cout << "Receiver Zip Code: " << receiverZip << "\n";
    std::cout << "Package Weight: " << weight << " ounces\n";
    std::cout << "Cost Per Ounce: $" << costPerOunce << "\n";
    std::cout << "----------------------------------------\n";

    std::cout << "Standard Shipping Cost: $" << package.calculateCost() << "\n";
    std::cout << "Two-Day Shipping Cost: $" << twoDayPackage.calculateCost() << "\n";
    std::cout << "Overnight Shipping Cost: $" << overnightPackage.calculateCost() << "\n";

    std::cout << "\nThank you for using our shipping cost calculator!\n";
    std::cout << "========================================\n";
    return 0;
}
