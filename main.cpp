#include <iostream>
using namespace std;

////problem 12
//int main(){
//    double firstAngle, secondAngle, thirdAngle;
//    cout<<"Enter 3 values of angles to check if they can form a triangle:";
//    cin>>firstAngle>>secondAngle>>thirdAngle;
//
//    if (firstAngle+secondAngle+thirdAngle==0)
//        cout<<"The triangle is valid";
//    else cout<<"The triangle is not valid";
//
//    return 0;
//
//}

////problem 13
//int main(){
//
//    cout<<"Assume that your quadratic equation is in the form a*x^2+b*x+c=0. \n ";
//
//    double a, b, c;
//
//    cout<<"Enter the value for a: ";
//    cin>>a;
//
//    cout<<"Enter the value for b: ";
//    cin>>b;
//
//    cout<<"Enter the value for c: ";
//    cin>>c;
//
//    double discriminant=b*b-4*a*c;
//
//            double x1=(-b-discriminant)/(2*a);
//            double x2=(-b+discriminant)/(2*a);
//
//    cout<<"x1= " <<x1<<"\n";
//    cout<<"x2= " <<x2<<"\n";
//
//    return 0;
//
//
//}


////problem 14
//
//int main() {
//    char character;
//    cout << "Enter a character: ";
//    cin >> character;
//
//    if (character >= 'A' && character <= 'Z') {
//        cout << "Uppercase alphabet\n";
//    } else if (character >= 'a' && character <= 'z') {
//        cout << "Lowercase alphabet\n";
//    } else {
//        cout << "It is not an alphabet";
//    }
//
//    return 0;
//}

////problem 15
//
//int main(){
//    cout<<"Enter weight and price for package 1:\n";
//    double weightOne, priceOne;
//    cin>> weightOne>>priceOne;
//
//    cout<<"Enter weight and price for package 2:\n";
//    double weightTwo, priceTwo;
//    cin>> weightTwo>>priceTwo;
//
//    double productOne=weightOne*priceOne;
//    double productTwo=weightTwo*priceTwo;
//
//    if(productOne != productTwo) {
//        if (productOne < productTwo)
//            cout << "Package 1 has a better price";
//
//            else cout << "Package 2 has a better price"; }
//    else cout<<"Two packages have the same price";
//
//    return 0;
//}


////problem 16
//int main(){
//    cout<<"Enter a three digit integer: ";
//    int Integer;
//    cin>>Integer;
//
//    int FirstDigit=Integer/100;//birinchi raqami
//    int ThirdDigit=Integer%10;  //oxirgi raqam
//
//            if (FirstDigit == ThirdDigit)
//                cout<<Integer<<" is a palindrome";
//            else cout<<Integer<<" is not a palindrome";
//
//     return 0;
//
//}

////problem 17
//int main() {
//    char lang;
//    cout << "Choose a language (u - Uzbek, e - English, r - Russian, g - German): ";
//    cin >> lang;
//
//    switch (lang) {
//        case 'u':
//            cout << "Salom\n";
//            break;
//        case 'e':
//            cout << "Hello\n";
//            break;
//        case 'r':
//            cout << "Privet\n";
//            break;
//        case 'g':
//            cout << "Hallo\n";
//            break;
//        default:
//            cout << "I do not know this language!\n";
//            break;
//    }
//
//    return 0;
//}

////problem 18
//#include <math.h>
//
//int main() {
//    double x, y;
//    cout << "Enter the coordinates of the point (x y): ";
//    cin>>x>>y;
//
//    double distance=sqrt(pow(x- 0,2) + pow(y-0,2));
//                //x-0 and y-0 used because the centre is at (0,0)
//
//    if (distance<=10) {
//        cout<<"The point is inside the circle.\n";
//    } else {
//        cout <<"The point is outside the circle.\n";
//    }
//
//    return 0;
//}

////problem WITHOUT NUMBER
//int main() {
//    float gpa;
//    cout<<"Enter the student's GPA (0.0 - 4.5): ";
//    cin>>gpa;
//
//    int gpaCategory = static_cast<int>(gpa * 10); // Convert GPA to an integer category
//
//    switch (gpaCategory) {
//        case 40:
//        case 41:
//        case 42:
//        case 43:
//        case 44:
//        case 45:
//            cout << "You get 80% scholarship\n";
//            break;
//        case 30:
//        case 31:
//        case 32:
//        case 33:
//        case 34:
//        case 35:
//            cout << "You get 50% scholarship\n";
//            break;
//        case 20:
//        case 21:
//        case 22:
//        case 23:
//        case 24:
//        case 25:
//        case 26:
//        case 27:
//        case 28:
//        case 29:
//            cout << "You get 30% scholarship\n";
//            break;
//        default:
//            if (gpa < 3.0) {
//                cout << "No scholarship\n";
//            } else {
//                cout << "Invalid GPA\n";
//            }
//            break;
//    }
//
//    return 0;
//}

////PROBLEM 19
//int main() {
//    int today, daysToAdd;
//    cout << "Enter today's day (1 for Sunday, 2 for Monday, ..., 7 for Saturday): ";
//    cin >> today;
//    cout << "Enter the number of days elapsed since today: ";
//    cin >> daysToAdd;
//
//    int futureDay = (today + daysToAdd) % 7;
//    if (futureDay == 0) {
//        futureDay = 7; // Adjusting for 0 to be Saturday
//    }
//
//    cout << "Today is ";
//    if (today == 1) {
//        cout << "Sunday\n";
//    } else if (today == 2) {
//        cout << "Monday\n";
//    } else if (today == 3) {
//        cout << "Tuesday\n";
//    } else if (today == 4) {
//        cout << "Wednesday\n";
//    } else if (today == 5) {
//        cout << "Thursday\n";
//    } else if (today == 6) {
//        cout << "Friday\n";
//    } else if (today == 7) {
//        cout << "Saturday\n";
//    } else {
//        cout << "Invalid day\n";
//        return 1;
//    }
//
//    cout << "The future day is ";
//    if (futureDay == 1) {
//        cout << "Sunday\n";
//    } else if (futureDay == 2) {
//        cout << "Monday\n";
//    } else if (futureDay == 3) {
//        cout << "Tuesday\n";
//    } else if (futureDay == 4) {
//        cout << "Wednesday\n";
//    } else if (futureDay == 5) {
//        cout << "Thursday\n";
//    } else if (futureDay == 6) {
//        cout << "Friday\n";
//    } else if (futureDay == 7) {
//        cout << "Saturday\n";
//    }
//
//    return 0;
//}

////problem 20
//int main() {
//    double weight;
//    cout << "Enter the weight of the package (in kg): ";
//    cin >> weight;
//
//    // Determine the weight category
//    int weightCategory;
//
//    if (weight < 0) {
//        cout << "Invalid input.\n";
//        return 1;
//    } else if (weight >= 0 && weight <= 1) {
//        weightCategory = 1; // 0-1 kg
//    } else if (weight > 1 && weight <= 5) {
//        weightCategory = 2; // 1-5 kg
//    } else if (weight > 5 && weight < 10) {
//        weightCategory = 3; // 5-10 kg
//    } else if (weight >= 10 && weight <= 20) {
//        weightCategory = 4; // 10-20 kg
//    } else {
//        cout << "The package cannot be shipped.\n";
//        return 1;
//    }
//
//    // Calculate cost using switch statement
//    cout << "The shipping cost is ";
//    switch (weightCategory) {
//        case 1:
//            cout << "3500 som.\n";
//            break;
//        case 2:
//            cout << "5500 som.\n";
//            break;
//        case 3:
//            cout << "8500 som.\n";
//            break;
//        case 4:
//            cout << "10500 som.\n";
//            break;
//        default:
//            cout << "Invalid category.\n";
//            break;
//    }
//
//    return 0;
//}


// //problem21

// int main() {
//     int month;
//     cout << "Enter the month number (1-12): ";
//     cin >> month;

//     cout << "In ";
//     switch (month) {
//         case 1:
//             cout << "January there is: New Year's Day, 1 January.\n";
//             break;
//         case 2:
//             cout << "February there is: Defender of the Fatherland Day, 14 February.\n";
//             break;
//         case 3:
//             cout << "March there is:\n- International Women’s Day, 8 March.\n- Navruz, 21 March.\n";
//             break;
//         case 4:
//             cout << "April there is: Navruz Holiday, 21 April.\n";
//             break;
//         case 5:
//             cout << "May there is:\n- Labor Day, 1 May.\n- Memory and Honor Day, 9 May.\n";
//             break;
//         case 6:
//             cout << "June there is: Ramadan Hayit (dates may change).\n";
//             break;
//         case 7:
//             cout << "July there is: Ramadan Hayit (dates may change).\n";
//             break;
//         case 8:
//             cout << "August there is: Independence Day, 31 August.\n";
//             break;
//         case 9:
//             cout << "September there is: Knowledge Day, 1 September.\n";
//             break;
//         case 10:
//             cout << "October there is: Teacher's Day, 1 October.\n";
//             break;
//         case 11:
//             cout << "November there is:\n- Constitution Day, 8 November.\n- National Revival Day, 18 November.\n";
//             break;
//         case 12:
//             cout << "December there is: New Year's Eve, 31 December.\n";
//             break;
//         default:
//             cout << "Invalid month number. Please enter a number between 1 and 12.\n";
//             break;
//     }

//     return 0;
// }




