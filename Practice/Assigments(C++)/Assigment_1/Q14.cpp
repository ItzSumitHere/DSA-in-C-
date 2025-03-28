// Write a program that will tell the number of dogs and chicken are there when the user will provide the value of 
// total heads and legs


 #include <iostream>
 using namespace std;

int main(){


    int leg , head, ckn,dog ;
    cout<< "Enter the number of heads: ";
    cin>>head;
    cout<< "Enter the number of legs: ";
    cin>>leg;
    ckn =(2*head-0.5*leg);
    dog = 4-ckn;
    cout<<"Number of chicken " << ckn << ", Number of Dogs " << dog;


}