// WAP to print all ASCII values and their equivalent characters of 26 alphabets using a while loop


#include <iostream>
using namespace std;

int main(){

    char ch = 'A';
    cout<<"ASCII value for upper case : ";
    cin>>ch;
    while(ch <= 'Z'){
        cout<<ch<<" -> "<<int(ch)<<endl;
        ch++;
    }

    ch = 'a';
    cout<<"ASCII value for lower case : ";
    cin>>ch;
    while(ch <= 'z'){
        cout<<ch<<" -> "<<int(ch)<<endl;
        ch++;
    }


}

