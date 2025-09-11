////problem1
//#include <iostream>
//  int main() {
//      int intNumber = 20;
//      float floatNumber = 3.14;
//      double doubleNumber = 45.1234;
//      bool boolean = true;//TRUE//1
//      char charName = 'A';
//
//      std::cout << "Value of Integer is " << intNumber << ". Size is "
//                << sizeof(intNumber) << " bytes." << std::endl;
//      std::cout << "Value of Float is " << floatNumber << ". Size is "
//                << sizeof(floatNumber) << " bytes." << std::endl;
//      std::cout << "Value of Double is " << doubleNumber << ". Size is "
//                << sizeof(doubleNumber) << " bytes." << std::endl;
//      std::cout << "Value of Char is " << charName << ". Size is "
//                << sizeof(charName) << " bytes." << std::endl;
//      std::cout << "Value of Bool is " << std::boolalpha << boolean << ". Size is "
//                << sizeof(boolean) << " bytes." << std::endl;
//
//      return 0;
//  }



////problem 2
//
//#include <iostream>
//#include <string>
//
//int main() {
//    // Declare variables for name, ID, favorite song, and movie
//    std::string name = "Malika Tulkinova";
//    std::string id = "250247";
//    std::string favoriteSong = "Smiths - Pretty girls make graves";
//    std::string favoriteMovie = "Requiem for a dream";
//
//    // Print the details
//    std::cout << name << std::endl;
//    std::cout << id << std::endl;
//    std::cout << favoriteSong << std::endl;
//    std::cout << favoriteMovie << std::endl;
//
//    return 0;
//}



////problem 3
//
//#include <iostream>
//
//#include <iostream>
//
//int main() {
//    std::cout << "\"I\'m standing\" on the edge of some crazy cliff.\n";
//    std::cout << "What I have to do, I have to catch everybody\\\n";
//    std::cout << "\tif they start to go over the cliff—I mean\\\n";
//    std::cout << "\t \\ if they\'re running and they don\'t look\n";
//    std::cout << "\t where they\'re going I have to come out\n";
//    std::cout << "\t from somewhere and \t catch them." << std::endl;
//
//    return 0;
//}




////problem 4
//
//#include <iostream>
//
//int main() {
//    // Given values
//    int a = 189;
//    char b = 'B';
//
//    // Calculating the required values
//    float float_a = a / 3.0;          // Float number a / 3
//    int decimal_b = static_cast<int>(b); // Decimal value of b
//    float float_sum = a + b / 5.0;    // Float number a + b / 5
//    char character_after_b = b + (a - 1); // Character of 10 positions after b
//
//    // Printing the results in a row
//    std::cout << float_a << " "
//              << decimal_b << " "
//              << float_sum << " "
//              << character_after_b << std::endl;
//
//    return 0;
//}