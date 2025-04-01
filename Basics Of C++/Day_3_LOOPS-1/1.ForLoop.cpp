// TOPIC-- "for loop" => for(intialiazation , condition , increment){cout<<"   "}

#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=5; i++){
        cout<<"Sumit the Coder"<<endl;
    }
}

// "int i=1" => initialiazation , "i<=5" => condition , "i++" => increment


int main(){
    for (int i=1; i<=5; i+=3){
        cout<<i<<endl;
    }
}


// example-1 => print Sumit The Coder 'n' timens. take 'n' as input from user.


#include <iostream>
using namespace std;

int main(){

    int n ;
    cout<<"Enter your number : ";
    cin>>n;

    for (int i=1; i<=n; i++){cout<<i<<"Sumit The Coder"<<endl;}

}


// example-2 => print num 1 to 100 

#include <iostream>
using namespace std;

int main(){

    for (int i=1; i<=100; i++){cout<<i<<endl;}

}

// example-3 => print all the even num from 1 to 100

#include <iostream>
using namespace std;
int main(){


         for(int i=2; i<=100; i+=2){cout<<i<<endl;}

                         //OR

    for(int i=1; i<=100; i++)  { if(i%2==0) {cout<<i<<endl;
    }

}              


}


// example-4 => print table of 19 


#include <iostream>
using namespace std;

int main(){


    for(int i=19; i<=19*10; i++){ if(i%19==0){cout<<i<<endl;}

    }
                        //OR

    for(int i=19 ;i<=19*10; i+=19){cout<<i<<endl;}
}

// example-5 => Display this AP 1,3,5,7,9,.. uptu "n" terms

#include <iostream>
using namespace std;

int main(){

    int n,a;
    cout<<"Enter Number : ";
    cin>>n;

    for (int i=1; i<=n; i+=2){cout<<i<<"\t";}

                    //OR
    
    for (int i=1; i<=2*n-1; i+=2){cout<<i<<endl;}

                    //OR

    for(int i=1; i<=n; i++){ cout<<a; 
        a+=2;}

}

// Example-6 => Display this GP 1,2,4,8,16,32,... upto 'n' terms


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, a = 1, r = 2; // First term (a = 1), Common ratio (r = 2)
    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 0; i < n; i++) { 
        cout << a * pow(r, i) << " "; // GP formula: a * r^i
    }
    return 0;


                            //OR

    for(int i=1; i<=n; i++){ cout<<a<<" "; 
        a*=2;}


}


