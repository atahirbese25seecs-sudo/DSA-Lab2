#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // Dynamically allocate memory for the string
    char *str = new char[100];

    // Input string
    cout << "Enter a string: ";
    cin.getline(str, 100);

    // Find the length of the string
    int length = strlen(str);

    // Reverse the string
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    // Display reversed string
    cout << "Reversed string: " << str << endl;

    // Free dynamically allocated memory
    delete[] str;

    return 0;
}
