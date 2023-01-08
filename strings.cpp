#include <iostream>
    using std::cout;
    using std::endl;
#include <string>
    using std::string;

int main ()
{
    string firstName = "Vardenis";
    string lastName = "Pavardenis";
    string myString = "Hello";
    string x1 = "10";
    string y1 = "20";
    string z1 = x1 + y1;
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    int x = 10;
    int y = 20;
    int z = x + y;

    // string fullName = firstName + " " +lastName; //
    string fullName = firstName.append(lastName); // append - pridėti.
    cout << fullName << endl;
    cout << z << endl;
    cout << z1 << endl;
    cout << "The length of the txt string is: " << txt.length() << endl; 
    cout << "The length of the txt string is: " << txt.size()  << endl; // alias of length
    cout << myString[0] << endl; // first character

    myString[0] = 'J';
    cout << myString << endl;

    return 0;
}