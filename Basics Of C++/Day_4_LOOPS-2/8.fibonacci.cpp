// print the fibonacci series upto n term.



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 0, b = 1;  // First two Fibonacci numbers

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {

        cout << a << " ";  // Print the current term

        int next = a + b;  // Calculate next term

        a = b;  // Shift a to b

        b = next;  // Update b to new term
    }

    cout << endl;
    return 0;
}


// Q2. print the n-th fibonacci number


#include <iostream>
using namespace std;


int main(){
    
    int n;
    cout<<"Enter n : ";
    cin>>n;
    

    if (n == 1 || n == 2) {
        cout << "Fibonacci Number = 1" << endl;  

        return 0;
    }


    int a=1,b=1,sum=0;
    for(int i=3; i<=n; i++){

        sum=a+b;
        a=b;
        b=sum;

    }

    cout<<sum<<endl;
    
}