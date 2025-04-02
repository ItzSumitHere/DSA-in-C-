// print a rectangle by taking input of COLOUMN and ROW.

#include <iostream>
using namespace std;

int main(){

    int row,colm;
    cout<<"Enter ROWs : ";
    cin>>row;
    cout<<"Enter COLOUMNs : ";
    cin>>colm;

        for (int i=1; i<=row; i++){
            
            for( int j=1; j<=colm; j++){
                cout<<"* ";
            }
            cout<<"\n";
        }

}



// print the given pattern

// *****
// *****
// *****

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    for (int i=1; i<=n;i++){

        cout<<"***"<<"\n";          // |  |     cout<<"***";                          
                                    // |OR|     cout<<endl;   
                                    // |  |
    }                               

}

