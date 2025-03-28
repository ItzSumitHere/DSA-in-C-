//Wap to check whether a given charecter is vowel or a consonant

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter your alphabet : ";
    cin >> ch;

    // Convert to lowercase to handle uppercase vowels
    ch = tolower(ch);

    // Check for vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "The character is a vowel." << endl;
    } 
    // Check if it's a valid alphabet but not a vowel (i.e., consonant)
    else if ((ch >= 'a' && ch <= 'z')) {
        cout << "The character is a consonant." << endl;
    } 
    // If not an alphabet
    else {
        cout << "Invalid input! Please enter an alphabet." << endl;
    }

    return 0;
}

