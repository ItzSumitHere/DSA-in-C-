// WAP to input any character and check whether it is the alphabet , digit or special charecter.

#include <iostream>
using namespace std;

int main(){



    
    char ch;
    cout<<"Enter your charecter : ";
    cin>>ch;

    int a  = int(ch);

    cout<<a;

    if((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<= 96) || (a>=123 && a<=127)) {cout<<" : Special Character";}

    else if (a>=48 && a<=57) {cout<<" : Digit";}

    else {cout<<" : Alphabet";}






}
