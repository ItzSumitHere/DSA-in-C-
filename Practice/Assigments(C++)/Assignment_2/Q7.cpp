// Given a point (x,y) , write a program to find out if it lies on the x-axis , y-axis or at the origin, viz.(0,0).

#include <iostream>
using namespace std;
int main(){


    int x,y;
    cout<<"Enter x axis : ";
    cin>>x;
    cout<<"Enter y axis : ";
    cin>>y;


    if((x==0)&&(y==0)){cout<<"point at origin";}

    else if (x==0){cout<<"Your point at Y-Axis ";}

    else if (y==0){cout<<"Your point at X-Axis ";}
    
    else {cout<<"Your point is not at x-axis and y-axis";}

}