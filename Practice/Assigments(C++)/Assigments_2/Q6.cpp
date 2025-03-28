// If the marks of A,B and C are input through the keyboard , write a program to determine the student scoring least marks

#include <iostream>
using namespace std;
int main(){


    int a,b,c ;
    cout <<"Enter 1st number..! : ";
    cin>>a;
    cout<<"Enter 2nd number..! : ";
    cin>>b;
    cout<<"Enter 3rd number...! : ";
    cin>>c;

    if ((a<b)&&(a<c)){cout<<a<<" is least";}

    else if ((b<a)&&(b<c)){cout<<b<<" is least";}

    else if ((c<a)&&(c<b)){cout<<c<<" is leats";}




}