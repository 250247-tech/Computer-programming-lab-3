#include <iostream>
using namespace std;


////problem1

//double multiply(double num1, double num2) {
//    return num1 * num2;
//}
//
//int main() {
//    double number1, number2;
//    cout << "Enter the first number: ";
//    cin >> number1;
//    cout << "Enter the second number: ";
//    cin >> number2;
//    double product = multiply(number1, number2);
//    cout << "The product of " << number1 << " and " << number2 << " is " << product << endl;
//    return 0;
//}


////problem 2

//double multiply(double num1, double num2) {
//    return num1 * num2;
//}
//
//int main() {
//    double number1, number2;
//    cout << "Enter the first number: ";
//    cin >> number1;
//    cout << "Enter the second number: ";
//    cin >> number2;
//    double product = multiply(number1, number2);
//    cout << "The product of " << number1 << " and " << number2 << " is " << product << endl;
//    return 0;
//}


////problem 3

//void fun(double radius) {
//    double circumference = 2 * M_PI * radius;
//    double area = M_PI * radius * radius;
//    cout << "Circumference: " << circumference << endl;
//    cout << "Area: " << area << endl;
//}
//
//int main() {
//    double radius;
//    cout << "Enter the radius of the circle: ";
//    cin >> radius;
//    fun(radius);
//    return 0;
//}


////problem 4
//
//void fun(double radius) {
//    double circumference = 2 * 3.14159 * radius;
//    double area = 3.14159 * radius * radius;
//    cout << "Circumference: " << circumference << endl;
//    cout << "Area: " << area << endl;
//}
//
//void fun(double a, double b) {
//    double perimeter = 2 * (a + b);
//    double area = a * b;
//    cout << "Perimeter: " << perimeter << endl;
//    cout << "Area: " << area << endl;
//}
//
//int main() {
//    double radius, a, b;
//    cout << "Enter the radius of the circle: ";
//    cin >> radius;
//    fun(radius);
//
//    cout << "Enter the length of side a of the rectangle: ";
//    cin >> a;
//    cout << "Enter the length of side b of the rectangle: ";
//    cin >> b;
//    fun(a, b);
//
//    return 0;
//}


////problem 5
//
//void swap(int &a, int &b) {
//    a = a + b;
//    b = a - b;
//    a = a - b;
//}
//
//int main() {
//    int num1, num2;
//    cout << "Enter two integers: ";
//    cin >> num1 >> num2;
//
//    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
//    swap(num1, num2);
//    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
//
//    return 0;
//}



////problem 6
//
//int Factorial(int n = 1) {
//    if (n <= 1) return 1;
//    return n * Factorial(n - 1);
//}
//
//int main() {
//    int number;
//    cout << "Enter a number to find its factorial (or press Enter for 1): ";
//    if (cin.peek() == '\n') {
//        cout << "Factorial of 1 is " << Factorial() << endl;
//    } else {
//        cin >> number;
//        cout << "Factorial of " << number << " is " << Factorial(number) << endl;
//    }
//
//    return 0;
//}


////problem 7
//
//int gcd(int num1, int num2) {
//    while (num2 != 0) {
//        int temp = num2;
//        num2 = num1 % num2;
//        num1 = temp;
//    }
//    return num1;
//}
//
//int main() {
//    int number1, number2;
//    cout << "Enter two numbers: ";
//    cin >> number1 >> number2;
//
//    cout << "GCD of " << number1 << " and " << number2 << " is " << gcd(number1, number2) << endl;
//
//    return 0;
//}


////problem 8
//
//int findMax(int a, int b, int c) {
//    return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
//}
//
//int findMin(int a, int b, int c) {
//    return (a < b) ? (a < c ? a : c) : (b < c ? b : c);
//}
//
//int main() {
//    int num1, num2, num3;
//    cout << "Enter three numbers: ";
//    cin >> num1 >> num2 >> num3;
//
//    cout << "Maximum: " << findMax(num1, num2, num3) << endl;
//    cout << "Minimum: " << findMin(num1, num2, num3) << endl;
//
//    return 0;
//}


////problem 9
//
//double sum(double a, double b) {
//    return a + b;
//}
//
//double subtract(double a, double b) {
//    return a - b;
//}
//
//double product(double a, double b) {
//    return a * b;
//}
//
//double division(double a, double b) {
//    if (b != 0) {
//        return a / b;
//    } else {
//        cout << "Error: Division by zero!" << endl;
//        return 0;
//    }
//}
//
//int main() {
//    double num1, num2;
//    cout << "Enter two numbers: ";
//    cin >> num1 >> num2;
//
//    cout << "Sum: " << sum(num1, num2) << endl;
//    cout << "Subtract: " << subtract(num1, num2) << endl;
//    cout << "Product: " << product(num1, num2) << endl;
//    cout << "Division: " << division(num1, num2) << endl;
//
//    return 0;
//}


////problem 10

//
//int getTriangularNumber(int n) {
//    return (n * (n + 1)) / 2;
//}
//
//int main() {
//    for (int i = 1; i <= 75; ++i) {
//        cout << getTriangularNumber(i) << "\t";
//        if (i % 5 == 0) {
//            cout << endl;
//        }
//    }
//    return 0;
//}

//
////problem 11
//
//#include <iostream>
//using namespace std;
//
//void displayEven(int number) {
//    bool hasEvenDigits = false;
//    while (number > 0) {
//        int digit = number % 10;
//        if (digit % 2 == 0) {
//            cout << digit << " ";
//            hasEvenDigits = true;
//        }
//        number /= 10;
//    }
//    if (!hasEvenDigits) {
//        cout << "No even digits found.";
//    }
//    cout << endl;
//}
//
//int main() {
//    int number;
//    cout << "Enter an integer: ";
//    cin >> number;
//
//    cout << "Even digits: ";
//    displayEven(number);
//
//    return 0;
//}


////problem 12
//
//int cubeOfDigits(int number) {
//    int sum = 0;
//    while (number > 0) {
//        int digit = number % 10;
//        sum += digit * digit * digit; // Cubing the digit
//        number /= 10;
//    }
//    return sum;
//}
//
//void isArmstrong(int sum, int number) {
//    if (sum == number) {
//        cout << number << " is an Armstrong integer." << endl;
//    } else {
//        cout << number << " is not an Armstrong integer." << endl;
//    }
//}
//
//int main() {
//    int number;
//    cout << "Enter an integer: ";
//    cin >> number;
//
//    int sum = cubeOfDigits(number);
//    isArmstrong(sum, number);
//
//    return 0;
//}



////problem 13
//
//int numberOfDaysInFebruary(int year) {
//    // Check if the year is a leap year
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//        return 29; // Leap year
//    } else {
//        return 28; // Non-leap year
//    }
//}
//
//int main() {
//    cout << "Year\tDays in February" << endl;
//    cout << "------------------------" << endl;
//
//    for (int year = 1985; year >= 1983; --year) {
//        cout << year << "\t" << numberOfDaysInFebruary(year) << endl;
//    }
//
//    return 0;
//}


////problem 15
//
//void printASCII(char ch1, char ch2, int numberPerLine) {
//    int count = 0;
//    for (char ch = ch1; ch <= ch2; ++ch) {
//        cout << "ASCII of '" << ch << "' is " << static_cast<int>(ch) << "\t";
//        count++;
//
//        if (count % numberPerLine == 0) {
//            cout << endl;
//        }
//    }
//    cout << endl;
//}
//
//int main() {
//    char startChar = 'a';
//    char endChar = 'm';
//    int numberPerLine = 6;
//
//    printASCII(startChar, endChar, numberPerLine);
//
//    return 0;
//}



////problem 21
//
//bool isPalindrome(int number) {
//    int original = number, reversed = 0;
//
//    while (number > 0) {
//        int digit = number % 10;
//        reversed = reversed * 10 + digit;
//        number /= 10;
//    }
//
//    return original == reversed;
//}
//
//int main() {
//    int count = 0;
//    for (int num = 2; count < 50; num += 2) {
//        if (isPalindrome(num)) {
//            cout << num << " ";
//            count++;
//            if (count % 5 == 0) {
//                cout << endl;
//            }
//        }
//    }
//    cout << endl;
//
//    return 0;
//}
