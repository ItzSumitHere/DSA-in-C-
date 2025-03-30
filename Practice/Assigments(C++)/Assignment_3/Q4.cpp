// display this GP - 3,12,48,... upto n terms

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    for( int i=3; i<=3*( pow( 4 , (n-1) ) ); i*=4){
        cout<<i<<endl;
    }

   
}





#include <iostream>
#include <iostream>
using namespace std;

int main(){


    int a,r,n;

    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
   
    int term=a;

    for(int i=0; i<n; i++){
        cout<<term<<endl;
        term*=r;
    }


}