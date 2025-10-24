#include <iostream>
using namespace std;


/*
//problem 1

int power(int x, int y){
    if(y == 0) {
        return 1;
    } else {
        return x * power(x, y-1);
    }
}

int main(){
    int num1, num2;

    cout << "enter the base: " << endl;
    cin>>num1;

    cout << "enter the power: " << endl;
    cin>>num2;

    int result = power(num1, num2);

            cout << num1 << " to the power of " << num2;
            cout << " is " << result;
            return 0;
}
*/


/*
//problem 2

int reverseNumber(int n, int reversedNum = 0) {
    if (n == 0) {
        return reversedNum;
    } else {
        int lastDigit = n % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        return reverseNumber(n / 10, reversedNum);
    }
}

int main() {
    int num1;
    cout << "Enter a number: ";
    cin >> num1;
    cout << reverseNumber(num1) << endl;

    return 0;
}
*/


/*
//problem 3

bool isPalindrome(int n, int& reversedNum) {
    if (n == 0) {
        return true;
    }

    int lastDigit = n % 10;
    reversedNum = reversedNum * 10 + lastDigit;
    return isPalindrome(n / 10, reversedNum);
}

bool isPalindrome(int n) {
    if (n < 0) return false;
    int reversedNum = 0;
    isPalindrome(n, reversedNum);
    return (n == reversedNum);
}

int main() {
    int num1;
    cout << "Enter a number: " << endl;
    cin >> num1;

     bool result = isPalindrome(num1);
     if(result == true) {
     cout << "the number is palindrome!" << endl;
     } else {
     cout << "the number is not a palindrome!" << endl;
     }
     return 0;
}

*/


/*
//problem 5

#include <cmath>

bool isPrime(int n, int divisor) {
    if (divisor > sqrt(n)) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }
    return isPrime(n, divisor + 1);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    return isPrime(n, 2);
}

int main() {
    int num1;
    cout << "Enter a number: " << endl;
    cin >> num1;

    bool result = isPrime(num1);
    if(result == true) {
        cout << "the number is prime!" << endl;
    } else {
        cout << "the number is not a prime!" << endl;
    }
    return 0;

}
 */


/*
//problem 5

int countEvenDigits(int n) {
    if (n == 0) {
        return 0;
    }

    int lastDigit = n % 10;
    int count = 0;

    if (lastDigit % 2 == 0) {
        count = 1;
    }

    return count + countEvenDigits(n / 10);
}

int main (){
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    int result = countEvenDigits(num);

    cout << "Number of even digits in " << num << " is ";
    cout << result;
    return 0;
}
*/


/*
//problem 6

int productOfAllDigits(int n){
    if ( n == 0) {
        return 1;
    } else {
        return n%10 * productOfAllDigits(n/10);
    }
}

int main (){
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    int result = productOfAllDigits(num);

    cout << "product of all digits in " << num << " is ";
    cout << result;
    return 0;
}
*/


/*
//problem 7

bool isPowerOfTwo(int n){
    if (n <= 0) {
        return false;
    }
    while (n > 1) {
        if (n % 2 != 0) {
            return false;
        }
        n /= 2;
    }

    return true;
}

int main (){
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

   bool result = isPowerOfTwo(num);

    if(result == true) {
        cout << "the number is power of two!" << endl;
    } else {
        cout << "the number is not power of two!" << endl;
    }

        return 0;
}
 */


/*
//problem 8

bool isStrictlyIncreasing(int n) {
    if (n < 10) {
        return true;
    }

    int lastDigit = n % 10;
    int secondLastDigit = (n / 10) % 10;

    if (lastDigit <= secondLastDigit) {
        return false;
    }

    return isStrictlyIncreasing(n / 10);
}

    int main(){
        int num;
        cout << "Enter a number: " << endl;
        cin >> num;

        bool result = isStrictlyIncreasing(num);

        if(result == true) {
            cout << "the digits of a number form a strictly increasing sequence!" << endl;
        } else {
            cout << "the digits of a number doesn't form a strictly increasing sequence!" << endl;
        }

        return 0;
    }
*/


/*
//problem 9

int countZeros(int n) {
    if (n == 0) {
        return 1;
    }
    if (n < 10) {
        return 0;
    }

    int lastDigit = n % 10;
    int count = 0;

    if (lastDigit == 0) {
        count = 1;
    }

    return count + countZeros(n / 10);
}

int main () {
    int num;
    cout << " Enter a number: " << endl;
    cin >> num;

    int result = countZeros(num);
    cout << "The number of zeros in your number is " << result;
    return 0;
}
 */

/*
//problem 10
int power(int x, int y) {
    if (y == 0) {
        return 1;
    }
    if (y % 2 == 0) {
        int half = power(x, y / 2);
        return half * half;
    } else {
        return x * power(x, y - 1);
    }
}

int main() {
    int num1, num2;

    cout << "enter the base: " << endl;
    cin >> num1;

    cout << "enter the power: " << endl;
    cin >> num2;

    int result = power(num1, num2);

    cout << num1 << " to the power of " << num2;
    cout << " is " << result;
    return 0;
}
*/