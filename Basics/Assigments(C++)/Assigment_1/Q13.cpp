// write a program to find the euclidean distance between two coordinates . take both the coordinate from the user as input.

#include <iostream>
#include<math.h>
using namespace std;
#define SQUARE(x) ((x)*(x))
int main(){

int a,b,c,d ,e ,f;
cout << "Enter 1st cordinate's 1st point : " ;
cin>>a;
cout << "Enter 1st cordinate's 2nd point : ";
cin>> b;
cout << "Enter 2nd cordinate's 1st point : " ;
cin >> c ;
cout << "Enter 2nd cordinate's 2nd point : ";
cin>>d;

e = SQUARE(a-b)+ SQUARE(c-d);     //also can use pow( (a-b) , 2 ) + pow( (c-d) , 2 )
cout<< sqrt(e);

}


//~~ to use "sqrt()" and "pow()" first we introduce " #include <math.h> " on top

//~~ for use "SQUARE()" first define it on top like " #define square(x) ( (x*x) )  "