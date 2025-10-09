#include <iostream>
using namespace std;

////problem 6
//
//double calculateTotalCost(int movieChoice, int numberOfTickets) {
//    double ticketPrice;
//
//    switch (movieChoice) {
//        case 1: // Movie A
//            ticketPrice = 8.00;
//            break;
//        case 2: // Movie B
//            ticketPrice = 10.00;
//            break;
//        case 3: // Movie C
//            ticketPrice = 12.00;
//            break;
//        default:
//            // Invalid movie choice
//            cout << "Invalid movie choice!" << endl;
//            return 0;
//    }
//
//    return ticketPrice * numberOfTickets;
//}
//
//void displayMovies() {
//    cout << "Available movie tickets: " << endl;
//    cout << "1. Inception - $8" << endl;
//    cout << "2. Interstellar - $10" << endl;
//    cout << "3. Formula 1 - $12 \n" << endl;
//}
//
//int main() {
//    int movieChoice, numberOfTickets;
//    double totalCost;
//    char continueBooking = 'y';
//
//    // Loop for multiple bookings
//    while (continueBooking == 'y' || continueBooking == 'Y') {
//        // Display movie options
//        displayMovies();
//
//
//        cout << "Enter your movie choice (1-3): ";
//        cin >> movieChoice;
//
//        cout << "Enter the number of tickets: ";
//        cin >> numberOfTickets;
//
//        // Calculate total cost
//        totalCost = calculateTotalCost(movieChoice, numberOfTickets);
//
//        // Check for valid total cost
//        if (totalCost >= 0) {
//            cout << "Total Cost: $" << totalCost << endl;
//        }
//        else cout << "\n"<< "Invalid number of tickets!" << endl;
//
//        cout << "\n" << "Do you want to make another booking? (y/n): ";
//        cin >> continueBooking;
//    }
//
//    cout << "Thank you for your bookings!" << endl;
//
//    return 0;
//}


////problem 7
//
//double calculateParkingFee(int hours) {
//    double fee = 0.0;
//
//    if (hours <= 2) {
//        fee = 0.0;
//    } else if (hours <= 5) {
//        fee = 2.0;
//    } else if (hours <= 6) {
//        fee = 5.0;
//    } else {
//        fee = 5.0 + (hours - 6) * 1.0;
//    }
//
//    return fee;
//}
//
//int main() {
//    int hours;
//    char continueCalculating = 'y';
//
//    while (continueCalculating == 'y' || continueCalculating == 'Y') {
//        cout << "Enter the number of hours parked: ";
//        cin >> hours;
//
//        double totalFee = calculateParkingFee(hours);
//
//        cout << "Total Parking Fee: $" << totalFee << endl;
//
//        cout << "Do you want to calculate the fee for another parking duration? (y/n): ";
//        cin >> continueCalculating;
//    }
//
//    cout << "Thank you for using the parking fee calculator!" << endl;
//
//    return 0;
//}


////problem 8
//
//double calculateTotalBill(int food, int quantity){
//    double price;
//
//    switch (food) {
//        case 1:
//            price = 10.0; //pizza
//            break;
//        case 2:
//            price = 8.0; //burger
//            break;
//        case 3:
//            price = 5.0; //salad
//            break;
//
//        default:
//            cout <<"Invalid food choice!";
//    }
//    return food * quantity;
//}
//void displayMenu() {
//    cout << "Menu:" << endl;
//    cout << "1. Pizza - $10" << endl;
//    cout << "2. Burger - $8" << endl;
//    cout << "3. Salad - $5" << endl;
//}
//int main (){
//    int food, quantity;
//    char continueOrdering = 'y';
//
//    while (continueOrdering == 'y' || continueOrdering == 'Y') {
//        displayMenu();
//        cout << "Select the food (1-3): ";
//        cin >> food;
//
//        cout << "Enter the quantity: ";
//        cin >> quantity;
//
//        double totalBill = calculateTotalBill(food, quantity);
//
//        if (totalBill > 0) {
//            cout << "Total Bill: $" << totalBill << endl;
//        } else {
//            cout << "Invalid item selected!" << endl;
//        }
//
//        cout << "Do you want to continue ordering? (y/n): ";
//        cin >> continueOrdering;
//    }
//
//    cout << "Thank you for your order!" << endl;
//
//    return 0;
//}

////problem 9
//
//bool isStrongPassword(const string & password) {
//    if (password.length() < 8) return false;
//
//    bool hasUppercase = false;
//    bool hasLowercase = false;
//    bool hasDigit = false;
//    bool hasSpecialChar = false;
//
//    for (char ch : password) {
//        if (ch >= 'A' && ch <= 'Z') {
//            hasUppercase = true;
//        } else if (ch >= 'a' && ch <= 'z') {
//            hasLowercase = true;
//        } else if (ch >= '0' && ch <= '9') {
//            hasDigit = true;
//        } else if (ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
//                   ch == '%' || ch == '^' || ch == '&' || ch == '*' ||
//                   ch == '(' || ch == ')' || ch == '-' || ch == '_' ||
//                   ch == '+' || ch == '=') {
//            hasSpecialChar = true;
//        }
//    }
//
//    return hasUppercase && hasLowercase && hasDigit && hasSpecialChar;
//}
//
//int main() {
//    string password;
//
//    cout << "Enter a password: ";
//    cin >> password;
//
//    if (isStrongPassword(password)) {
//        cout << "Output: Strong Password" << endl;
//    } else {
//        cout << "Output: Weak Password (Missing uppercase letter or special symbol)" << endl;
//    }
//
//    return 0;
//}
//
