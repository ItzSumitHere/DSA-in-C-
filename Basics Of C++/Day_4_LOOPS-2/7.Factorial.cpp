//print the factorial of a given number n

#include <iostream>
using namespace std;

int main(){
    int n,fact=1;
    cout<<"Enter Num : ";
    cin>>n;
    
    if(n==0){
    cout<<"factorial = 1"<<endl;
    }

    else if(n<0){
        cout<<"factioral is not defined for -ve numbers.";
    }

    else{

    for(int i=1; i<=n; i++){
        
    fact*=i;}
    cout<<"factorial = "<<fact<<endl;
}

}