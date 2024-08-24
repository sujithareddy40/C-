#include <iostream>
#include <cstring>
using namespace std;

string concatenate(string str1, string str2) {
    return str1 + str2;
}

char* concatenate(char* arr1, char* arr2) {
    char* result = new char[strlen(arr1) + strlen(arr2) + 1];
    strcpy(result, arr1);
    strcat(result, arr2);
    return result;
}

int main() {
    // Concatenate strings
    string str1 = "Hello, ";
    string str2 = "World!";
    cout << "Concatenated string: " << concatenate(str1, str2) << endl;

    // Concatenate character arrays
    char arr1[] = "Good ";
    char arr2[] = "Morning!";
    cout << "Concatenated character array: " << concatenate(arr1, arr2) << endl;

    return 0;
}

