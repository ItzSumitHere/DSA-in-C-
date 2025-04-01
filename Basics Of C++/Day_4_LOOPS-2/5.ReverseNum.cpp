#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter your num : ";
    cin>>n;

    int reverse_num = 0;

    while(n>0){

        reverse_num = reverse_num*10+(n%10);
        n/=10;

    }
    cout<<reverse_num<<endl;
}
