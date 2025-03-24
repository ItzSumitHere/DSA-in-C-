// WAP to find the sum of sequence of first "n" natural numbers where "n" will be provided by the user.

# include <iostream>
using namespace std;

int main (){


    int a ,sum ;
    cout<< "Enter your number : ";
    cin>>a ;
    sum= (a*(a+1)*(2*a+1))/6;
    cout<<"The sum of "<<a<<" natural numbers "<<sum;


}