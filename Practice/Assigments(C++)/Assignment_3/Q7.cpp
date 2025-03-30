// WAP to take an integer n as input and print the sum of first n natural numbers using a loop.



#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter n : ";
    cin>>n;
    
     
    int sum=0;
    for(int i=0; i<=n; i++){ 
    sum+=i;}
        cout<<sum<<endl;
}
