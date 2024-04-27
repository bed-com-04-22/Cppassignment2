#include <iostream>
#include <string>
 using namespace std;

int main(){
    int* dynamicInt = new int;
    string* dynamicString = new string;
    cout << "Enter an integer value:" << endl;
    cin >> *dynamicInt;
    cout << "Enter a string value:" << endl;
    cin.ignore();
    getline(cin, *dynamicString);

    cout << "Dynamically allocated integer value: " << *dynamicInt << endl;
    cout << "Dynamically allocated string value: " << *dynamicString << endl;

    return 0;
}