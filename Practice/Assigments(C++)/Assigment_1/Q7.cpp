// Take an integer between 65 and 90 as input and print its corresponding uppercase letter.


#include<iostream>
using namespace std;
int main(){

    int a ;
    cout<<"Enter you number : ";
    cin>>a;
        if (a>65&&a<=90){
            cout<<char(a)<<"\n";       // kisi number pe kon sa character hai usko dekhne ke liye us number "(a)" ke aage "char"  
        }                              // likh denge 
            else{cout<<"You does not enter number between 65 to 90"<<"\n";}

}

// we can use "  <<"\n"  " instade of " <<endl  "