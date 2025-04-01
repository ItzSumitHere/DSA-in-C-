

// Q2. print the n-th fibonacci number


#include <iostream>
using namespace std;


int main(){
    
    int n;
    cout<<"Enter n : ";
    cin>>n;
    

    if (n == 1 || n == 2) {
        cout << "Fibonacci Number = 1" << endl;  
    }

    cout<<"Enter n : ";
    cin>>n;
    int a=1,b=1,sum=0;
    for(int i=1; i<=n-2; i++){

        sum=a+b;
        a=b;
        b=sum;

    }

    cout<<sum<<endl;
    
    return 0;


}