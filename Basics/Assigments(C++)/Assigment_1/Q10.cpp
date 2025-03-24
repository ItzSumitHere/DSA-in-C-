//Explain the difference between x++ and ++x in your words.

//~ take an integer as input and 
//~ print its value using post-increment (x++)
//~ print its value again using pre-increment(++x)



#include <iostream>
using namespace std;
int main(){


    int x;
    cout<<"Enter your number : ";
    cin>>x;
    cout<<x++<<"\n";
    cout<<++x;

    
}