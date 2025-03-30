// take a positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15


#include <iostream>
using namespace std;

int main(){

        int a;

        cout<<"Enter num : ";
        cin>>a;
        if((a%5==0 || a%3==0)&& a%15!=0){
        "Your number is divisibe by 5 or 3 but not divisible by 15";}

        else {cout<<"condition not followed";}

}


