#include <iostream>
    using std::cin; // Character input
    using std::cout;
    using std::endl;
#include <string> // string library
    using std::string;

int main()
{
    int myNum = 5;            // Integer (whole number without decimals)
    double myFloatNum = 5.99; // Floating point number (with decimals)
    char myLetter = 'D';      // Character
    string myText = "Hello 123";  // String variable (text)
    string userName = "Vardenis Pavardenis";
    string myCollor;
    bool myBoolean = true;    // Boolean (true or false)

    cout << myNum << endl;
    cout << myFloatNum << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;

    cout << "What is your name and surname?: " << endl;
    getline(cin, userName); // Input of string line
    cout << "What is your favorite collor?: " << endl;
    cin >> myCollor; // Input of one word
    cout << "Your name is: " << userName << "\tYour favorite color is: " << myCollor << endl;
    return 0;
}

/*
Preprocesor directives:
#include
#define - PI 3.14159, MIN(a,b)..
#ifndef NULL
   #define NULL 0
#endif..

Operators:
= assignment operator
<< stream insertion operator
>> stream extraction opertor

*/
