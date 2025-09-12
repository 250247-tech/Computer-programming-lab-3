
#include <iostream>
using namespace std;

////problem 11
//int main() {
//
//    double var1 = 1.13e3; // 1130.0
//    double var2 = 411e-4; // 0.0411
//
//    std::cout << static_cast<int>(var1) << " " << var2 << std::endl;
//
//    return 0;
//}

//// problem 12
//
//int main() {
//
//    int x=241;
//    int y=11;
//
//
//
//    std::cout << "Students in first group: " << x/y << std::endl;
//    std::cout << "Students in last group: " << x%y<< std::endl;
//
//    return 0;
//}

//problem 13

//#include <math.h>
//
//int main() {
//    double side;
//    std::cout << "Enter the side of a hexagon: ";
//    std::cin >> side;
//
//
//    double area = (3 * sqrt(3) / 2) * side * side;
//
//    std::cout << "The area of the hexagon is " << area << std::endl;
//
//    return 0;
//}


////problem 14
//int main() {
//
//    int num = 50;
//
//    num += 1;
//    num *= 3;
//    num -= 14;
//    num /= 4;
//    num -= 1;
//    num %= 9;
//
//    std::cout << num << std::endl;
//
//    return 0;
//}



////problem 15
//
//int main() {
//
//    char a = 'A';
//
//
//    cout << static_cast<char>(a + 7);
//    cout << static_cast<char>(a + 4);
//    cout << static_cast<char>(a + 11);
//    cout << static_cast<char>(a + 11);
//    cout << static_cast<char>(a + 14);
//    cout << "!";
//
//    cout << std::endl;
//
//    return 0;
//}


////problem 16
//
//int main() {
//
//    float x = 17.0;
//    float y = 1.0;
//
//    float eighteen = ++x;
//
//    float z = (x + eighteen) / (3 * 2);
//
//    cout << z << endl;
//
//    return 0;
//}



////problem 17
//
//int main() {
//    int num1, num2;
//
//
//    cout << "Enter first number: ";
//    cin >>num1;
//
//    cout << "Enter second number:";
//    cin >>num2;
//
//
//    if (num1==num2) {
//        cout << 1 << endl;
//    } else {
//        cout << 0 << endl;
//    }
//
//    return 0;
//}
////



////problem 18

//int main() {
//    int a, b;
//
//
//    cout << "Enter variable a: ";
//    cin >>a;
//
//    cout << "Enter variable b: ";
//    cin >>b;
//
//
//    if  (a<140 && a<b) {
//        cout << 1 << endl;
//    } else {
//        cout << 0 << endl;
//    }
//
//    return 0;
//}



////problem 19
//
//using namespace std;
//
//int main() {
//    int a, b, c;
//
//    cout << "Enter variable a: ";
//    cin >> a;
//
//    cout << "Enter variable b: ";
//    cin >> b;
//
//    cout << "Enter variable c: ";
//    cin >> c;
//
//    if (a > b && a > c) {
//        cout << 1 << endl; // a is the greatest
//    } else {
//        cout << 0 << endl; // a is not the greatest
//    }
//
//    return 0;
//}


////problem 20
//
//int main() {
//    int numbers[5];
//    bool hasNonNegative = false;
//
//    cout << "Enter 5 integer numbers: ";
//    for (int i = 0; i < 5; ++i) {
//        cin >> numbers[i];
//        if (numbers[i] >= 0) {
//            hasNonNegative = true;
//        }
//    }
//
//    if (hasNonNegative) {
//        cout << 1 << endl;
//    } else {
//        cout << 0 << endl;
//    }
//
//    return 0;
//}



////problem 21
//int main() {
//    int a, b;
//
//    cout << "Enter the first integer number: ";
//    cin >> a;
//
//    cout << "Enter the second integer number: ";
//    cin >> b;
//
//    int sum = a + b;
//    int product = a * b;
//
//    int condition1 = (sum > 30 && product > 30) ? 1 : 0;
//    int condition2 = ((sum - 10 > 30) || (product - 10 > 30)) ? 1 : 0;
//    int condition3 = (a > 30 || b > 30) ? 1 : 0;
//
//    cout << condition1 << " " << condition2 << " " << condition3 << endl;
//
//    return 0;
//}


//problem 22

//
//int main() {
//    float sardorHeight, mikeHeight;
//
//    cout << "Enter Sardor's height in cm: ";
//    cin >> sardorHeight;
//
//    cout << "Enter Mike's height in ft: ";
//    cin >> mikeHeight;
//
//    float mikeHeightInCm = mikeHeight * 30.48;
//
//    if (mikeHeightInCm > sardorHeight) {
//        cout << 1 << endl;
//    } else {
//        cout << 0 << endl;
//    }
//
//    return 0;
//}