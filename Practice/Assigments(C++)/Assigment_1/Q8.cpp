// what is the output of this program
 



//Doubt hai Doubt




#include <iostream>
using namespace std;

int main(){

    int a = 4 ;
    int b = 5 ;
    a++ , b--;   //~ here a++(post increment)->pehle "a=4" ko as it is execute karega (means cout me bhej dega) then "a" ko 1
    //increase kar dega{after that a=5} 

    //~ here b--(post decrement)->pehle "b=5" ko as it is execute kar dega (means cout me bhej dega)then "b" ko by 1 decrease
    //kar dega {after that a=4}

    cout <<++a<<" "<<b--;    //here ++a(pre increment) -> pehle "a" ko by 1 increase karega{then a=6}
}




// pre-increment(++a) => {diye hue number ko pehle increase karega then execute karega}
// pre-decrement(--a) => {diye hue number ko pehle decrease karega then execute karega}

//post-increment(a++) => {diye hue number ko as it is execute karega then increase karega}
//post-decrement(a--) => {diye hue number ko as it is execute karega then decrease arega}