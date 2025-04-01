// print this series : 1 - 2 + 3 - 4 + 5 - 6.... upto n

#include <iostream>
#include<cmath>
using namespace std;


int main(){

    int n,i=1;
    cout<<"Enter num : ";
    cin>>n;
    while(n>=i){

    int num=i*(pow((-1),(i-1)));  
        i+=1;
        cout<<num<<"\t";
    }

} 



// print the sum of this series : 1 - 2 + 3 - 4 + 5 - 6.... upto n


#include <iostream>
#include<cmath>
using namespace std;


int main(){

    int n,i=1;
    cout<<"Enter num : ";
    cin>>n;

    int sum=0;
    for (int i=1; i<=n; i++){
        if(i%2!=0){
            sum+=i;
        }
        else{
            sum-=i;
        }
    }

    cout<<sum<<endl;
} 
