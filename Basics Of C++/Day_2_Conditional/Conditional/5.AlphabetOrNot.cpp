#include <iostream>
using namespace std;

int main(){



    char ch;
    cout<<"Enter your alphabet : ";
    cin>>ch;
    int ascii = (int)ch;
    if (ascii>=97 && ascii<=122  || ascii<=6&&ascii<=90){

        cout<<"Its a alphabet";

    }
    else{cout<<"It is not Alphabet";}
}

