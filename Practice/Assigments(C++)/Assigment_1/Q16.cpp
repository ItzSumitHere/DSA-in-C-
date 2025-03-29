// Given 2 fraction , find the sum of those 2 fraction . take the numerator and denominator values of the fraction form the user.

#include <iostream>
using namespace std;


int main() {

    int a,b,c,d;
    float fraction;
    cout<<"Enter numerator of 1st fraction : ";
    cin>>a;
    cout<<"Enter denominator of 1st fraction : ";
    cin>>b;
    cout<<"Enter numerator of 2st fraction : ";
    cin>>c;
    cout<<"Enter enominator of 1st fraction : ";
    cin>>d;

    fraction=((d*a)+(b*c))/(b*d);


    cout<<"Sum = "<<fraction;


}