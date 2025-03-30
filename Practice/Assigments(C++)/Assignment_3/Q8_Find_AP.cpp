#include <iostream>
using namespace std;

int main(){


    int a,d,n;
    
    cout<<"Enter first element 'a' : ";
    cin>>a;
    cout<<"Enter difference 'd' : ";
    cin>>d;
    cout<<"Enter value of 'n' : ";
    cin>>n;

    for(int i=a; i<=(a+(n-1)*d); i+=d){
        cout<<i<<endl;}

   
}