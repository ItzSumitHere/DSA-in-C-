// write a menu-driven program.

#include <iostream>
using namespace std;

int main(){
    int choice;

    cout<<"Welcome to convertor\n\n";
    cout<<"Enter your choice : \n1. cm to ft\n2. km to miles\n3. USD to INR\n4. exit\n";

    cin>>choice;

    switch(choice){
        case 1: 
            int cm,ft;
            cout<<"Enter lenght in cm : ";
            cin>>cm;
            ft=cm/30.4;
            cout<<ft<<" Foot";
            break;
        case 2: 
            int km,miles;
            cout<<"Enter lenght in km : ";
            cin>>km;
            miles=km/1.609;
            cout<<miles<<" Miles";  
            break;       
        case 3:
            int USD,INR;
            cout<<"enter USD : ";
            cin>>USD;
            INR=USD*86.95;
            cout<<INR<<" INR";
            break;
    default :
        exit(0);
            
    }

    cout<<"Thank You";
    return 0;
}