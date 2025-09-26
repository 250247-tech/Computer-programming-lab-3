#include <iostream>
using namespace std;

////problem 11
//
//int main(){
//
//    int number
//    int positives = 0, negatives = 0, total = 0, count = 0;
//
//    cout<<"Enter an integer (0 to end): ";
//
//    while (true) {
//        cin >> number;
//        if (number == 0) {
//            break;
//        }
//        if (number > 0) {
//            positives++;
//        } else {
//            negatives++;
//        }
//        total += number;
//        count++;
//    }
//
//    double average = (count > 0) ? static_cast<double>(total) / count : 0;
//
//    cout << "The number of positives is " << positives << endl;
//    cout << "The number of negatives is " << negatives << endl;
//    cout << "The total is " << total << endl;
//    cout << "The average is " << average << endl;
//
//    return 0;
//}


////problem 12
//
//int main() {
//    int size;
//
//    cout << "Enter the size of the square: ";
//    cin >> size;
//
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cout << "* ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

////problem 13
//
//int main() {
//    int size;
//
//    cout << "Enter the height of the triangle: ";
//    cin >> size;
//
//    for (int i = 1; i <= size; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << "* ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

////problem 14
//
//int main() {
//    int height;
//
//    cout << "Enter the height of the triangle: ";
//    cin >> height;
//
//    if (height == 0) {
//        cout << "The depth is 0" << endl;
//    } else {
//        for (int i = 1; i <= height; i++) {
//            for (int j = 1; j <= i; j++) {
//                cout << i;
//            }
//            cout << endl;
//        }
//    }
//
//    return 0;
//}


////problem 16
//
//int main() {
//    double initialRent = 1000.0;
//    double increaseRate = 0.03; // 3% increase
//    int years = 5;
//    double totalRent = 0.0;
//
//    for (int i = 1; i <= years; i++) {
//        double currentRent = initialRent * pow(1 + increaseRate, i - 1);
//        totalRent += currentRent;
//
//        cout << "For year number " << i << " rent is " << currentRent << endl;
//    }
//
//    cout << "The total for " << years << " years is " << totalRent << endl;
//
//    return 0;
//}


////problem 17
//
//int main() {
//
//    int number;
//    int sum = 0;
//
//    cout << "Input: ";
//    cin >> number;
//
//    int temp = number;
//    while (temp > 0) {
//        sum += temp % 10;
//        temp /= 10;
//    }
//
//    cout << "The sum of digits is " << sum << endl;
//
//    return 0;
//}

////problem 18
//
//int main () {
//    int binaryNum;
//    cout<<"Enter binary number: ";
//    cin>>binaryNum;
//
//    int decimalNum = 0; int base = 1;
//
//    while (binaryNum > 0) {
//        int lastDigit = binaryNum % 10;
//        decimalNum += lastDigit * base;
//        binaryNum /= 10;
//        base *= 2;
//    }
//
//    cout << "The decimal number is " << decimalNum << endl;
//
//    return 0;
//}

////problem 19
//
//int main() {
//
//    int number;
//
//    cout << "Input: ";
//    cin >> number;
//
//    cout << "Output: ";
//
//    for (int i = 2; i <= number; i++) {
//        while (number % i == 0) {
//            cout << i << " ";
//            number /= i;
//        }
//    }
//
//    cout << endl;
//
//    return 0;
//}


////problem 20
//
//int main() {
//    int n;
//    cout << "Input: ";
//    cin >> n;
//
//    double pi = 0;
//
//    for (int i = 0; i < n; i++) {
//        double term;
//        if (i % 2 == 0) {
//            term = 1;
//        } else {
//            term = -1;
//        }
//        pi += term / (2 * i + 1);
//    }
//
//    pi *= 4;
//
//    cout << pi << endl;
//
//    return 0;
//}

////problem 22
//
//int main() {
//
//    for (int i = 1; i < 11; i++){
//        cout <<  i << " miles " << "= " << i * 1609 << " kilometres" << endl;
//    }
//    return 0;
//}


////problem 23
//
//    int main() {
//        int n = 0;
//        int limit = 30000;
//
//        while (pow(2, n) < limit) {
//            n++;
//        }
//
//        n--;
//
//        cout << "The largest n such that 2^n < 30,000 is: " << n << endl;
//
//        return 0;
//    }
//}


////problem 24
//
//int main() {
//    const int iterations = 100000;
//    int evenCount = 0;
//    int oddCount = 0;
//
//    for (int i = 0; i < iterations; i++) {
//        int randomNumber = rand() % 1000000;
//
//        if (randomNumber % 2 == 0) {
//            evenCount++;
//        } else {
//            oddCount++;
//        }
//    }
//
//    cout << "Total even numbers: " << evenCount << endl;
//    cout << "Total odd numbers: " << oddCount << endl;
//
//    return 0;
//}