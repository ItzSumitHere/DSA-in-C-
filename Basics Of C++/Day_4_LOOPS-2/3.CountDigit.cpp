#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter your number: ";
    cin >> n;

    if (n == 0) {
        count = 1;  // Kyunki 0 ek single digit number hai
    } else {
        n = abs(n);  // Negative numbers ka bhi sahi count mile
        while (n > 0) {
            n /= 10;
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}


