// display this AP 4,7,10,13,16..upto n terms

#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=4; i<= 4+(n-1)*3; i+=3){
        cout<<i<<endl;
    }

   
}







#include <iostream>
using namespace std;

int main(){


    int a,d,n;
    
    cout<<"Enter first element 'a' : ";
    cin>>a;
    cout<<"Enter difference 'd' : ";
    cin>>d;
    cout<<"Enter value of 'n' : ";
    cin>>n;

    for(int i=a; i<=(a+(n-1)*d); i+=d){
        cout<<i<<endl;}

   
}