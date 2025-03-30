//pridict the output


#include <iostream>
using namespace std;



int main() {
    int a = 500, b, c;
    if (a <= 400)  // false, to eske next line execute nahi hogi 
        b = 300;   // ye "if" condition ka hi part hai  ("b" me kuch ajib sa value aayega)
        c = 200;   // esiliye ye execute hoga , ye "if" condition ka part nahi hai...agar "b=200" execute hota bhi tab bhi ye execute
                   // tab bhi ye execute hota.
        
    cout<< "value of b and c are respectively " << b << " and " << c;
    return 0;
}



 


