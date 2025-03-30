// convert case using ASCII value..

#include <iostream>
using namespace std;


int main(){

    char ch;
    cout<<"Enter a leter in small case : ";
    cin>>ch;
    char cap_ch=char(int(ch) - 32);

    cout<<"Capital latter letter is : "<<cap_ch;

    return 0;


}


//code 2 (AI)  "i understood it and like it as well.."

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a letter: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        char cap_ch = char(int(ch) - 32);  // Convert lowercase to uppercase
        cout << "Capital letter is: " << cap_ch << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        char lower_ch = char(int(ch) + 32);  // Convert uppercase to lowercase
        cout << "Lowercase letter is: " << lower_ch << endl;
    } else {
        cout << "Invalid input! Please enter an alphabetic character." << endl;
    }

    return 0;
}