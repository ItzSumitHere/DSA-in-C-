// WAP to check if a number is prime or not.



#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    bool flag = true ; // i have already assume ki jo number put kiya ja rha hai wo prime hai..!
    for (int i=2; i<=(n-1); i++){      //"(n-1)" ki jagah "sqrt(n)" bhi use kar sakte hai

        if(n%i==0){ flag=false;
            break; 
    }  
                
    }
    if(n==1){cout<<"Its nither prime nor composit.";}
    if(flag==true) {cout<<n<<" is a Prime number.";}
    else {cout<<n<<" is a composit number";}
}
