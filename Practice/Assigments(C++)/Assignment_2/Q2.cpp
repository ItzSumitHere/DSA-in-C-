// Given the radius of the circle predict whether numerically area of the circle is larger than the circumference or not.

#include <iostream>
using namespace std;

int main (){

    int r, area , crmf;
    cout<<"Enter radius..!";
    cin>>r;
    float area = 22/7*r*r;
    float crmf=2*22/7*r;
    
    if (area>crmf){cout<<area<<": Area is greater";}
    else{cout<<" circumference is greater";}


}