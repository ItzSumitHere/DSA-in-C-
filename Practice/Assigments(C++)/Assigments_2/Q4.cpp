// Given the length and breadth of a rectangle , write a program to find whether numerically the area of the 
//rectangle is greater than its perimeter

#include <iostream>
using namespace std;
int main(){
    int a,b ;
    cout<< "lenght : ";
    cin >> a ;
    cout << "Breadth : ";
    cin >> b;

   int area = a*b;
   int perimeter = 2*(a+b);

    if(area>perimeter){cout<<"Area is greater then perimeter..!";}
    else{cout<<"Perimeter is greater then area";}

}