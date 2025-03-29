// given three points (x1,y1) , (x2,y2) and (x3,y3) , WAP to chech if all the three points fall 
//on one straight line


#include <iostream>
using namespace std;

int main(){

    int x1,y1,x2,y2,x3,y3,m1,m2;

    cout<<"Enter 1st point (x1,y1) : ";
    cin>>x1>>y1;
    cout<<"Enter 2nd point (x2,y2) : ";
    cin>>x2>>y2;
    cout<<"Enter 3rd point (x3,y3) : ";
    cin>>x3>>y3;
    
    m1 = (y2-y1)/(x2-x1) ;
    m2 = (y3-y2)/(x3-x2);

    if(m1==m2){cout<<"at same line"; }
    else{cout<<"Not at same line";}
}