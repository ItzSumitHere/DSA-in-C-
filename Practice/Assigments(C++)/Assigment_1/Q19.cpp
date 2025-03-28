//What will be the output of the following code?


#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;
    int c = a += b -= 3;
    cout << a << " " << b << " " << c;
    return 0;
}

