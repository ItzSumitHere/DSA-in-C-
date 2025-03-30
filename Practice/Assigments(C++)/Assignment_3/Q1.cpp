//print all odd number form 1 to 100

#include <iostream>
using namespace std;

int main(){

    for(int i=1; i<=100; i+=2){ cout<<i<<endl; }

                    //OR

    for(int i=1;i<=100; i++){
        if(i%2!=0){cout<<i<<endl;}
    }
} 