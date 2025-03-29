// Take two numbers as input and perform addition , substraction, multiplication, and division. Display the result


#include <iostream>
using namespace std;
 main(){
  
    int a, b ,add , sub , multi ,div;
    cout<<"Enter your 1st number : ";
    cin>>a;
    cout<<"Enter your 2nd number : ";
    cin>>b;
    add = a+b ;
    sub = a-b ;
    multi = a*b;
    div = a/b;

    cout<<"Addition is : " <<add  <<endl ;
    cout<<"Substraction is : " <<sub <<endl;
    cout<<"Multiplication is : "<<multi <<endl;
    cout<<"Division is : "<<div <<endl;


// "<<endl" used to generate next line 



}