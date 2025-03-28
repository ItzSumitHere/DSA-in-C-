// Wap to input sides of a triangle and check whether a triangle is equilateral , scalene or isosceles triangle.


#include <iostream>
using namespace std;

int main (){


    double a,b,c;
    cout<<"Enter 1st side : ";
    cin>>a;
    cout<<"Enter 2nd side : ";
    cin>>b;
    cout<<"Enter 3rd side : ";
    cin>>c;
    if (a==b && b==c){cout<<"Equilateral";}

    else if ( a==b || b==c || c==a ){cout<<"isosceles";}

    else {cout<<"Scalene";}


}