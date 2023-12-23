//FCP FirstYear method #Deshpande Ma'am 
#include <iostream>
#include <string>

using namespace std;

void swapStrings(string *str1, string *str2) {
    string temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main() {
    string firstString, secondString;

    // Input the strings
    cout << "Enter the first string: ";
    cin >> firstString;

    cout << "Enter the second string: ";
    cin >> secondString;

    // Displaying strings before swap
    cout << "\nStrings before swapping:" << endl;
    cout << "First string: " << firstString << endl;
    cout << "Second string: " << secondString << endl;

    // Swapping strings using call by reference
    swapStrings(&firstString, &secondString);

    // Displaying strings after swap
    cout << "\nStrings after swapping:" << endl;
    cout << "First string: " << firstString << endl;
    cout << "Second string: " << secondString << endl;

    return 0;
}


//Second year method
#include <iostream>
#include <string>

using namespace std;

void swapStrings(string &str1, string &str2) {
    string temp = str1;
    str1 = str2;
    str2 = temp;
}

int main() {
    string firstString, secondString;

    // Input the strings
    cout << "Enter the first string: ";
    cin >> firstString;

    cout << "Enter the second string: ";
    cin >> secondString;

    // Displaying strings before swap
    cout << "\nStrings before swapping:" << endl;
    cout << "First string: " << firstString << endl;
    cout << "Second string: " << secondString << endl;

    // Swapping strings using call by reference
    swapStrings(firstString, secondString);

    // Displaying strings after swap
    cout << "\nStrings after swapping:" << endl;
    cout << "First string: " << firstString << endl;
    cout << "Second string: " << secondString << endl;

    return 0;
}
