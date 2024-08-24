#include <iostream>
#include <string>
using namespace std;

string reverseString(string s) {
    string rev = "";
    for(int i = s.length() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}

