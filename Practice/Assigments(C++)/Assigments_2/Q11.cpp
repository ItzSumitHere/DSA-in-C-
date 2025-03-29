// The minimum angle between hours and minute hand when the time is 9 angle is 90 degrees



#include <iostream>
#include<cmath>  // just for "abs" in line 22
using namespace std;

int main(){



    int hour,min;
    cout << "Enter Hours : ";
    cin>>hour;
    cout<< "Enter minute : ";
    cin>>min;
    
    int hour_angle=hour*30;
    int min_angle=min*6;

    int difference = abs(hour_angle - min_angle);
    cout<<difference;

    if (difference>180)
        difference=360-difference;

    cout<<"Minute angle is : "<<difference;


}



// code 2 (by AI)

#include <iostream>
#include <cmath> // for "abs"
using namespace std;

int main() {
    int hour, min;
    cout << "Enter Hours : ";
    cin >> hour;
    cout << "Enter Minutes : ";
    cin >> min;

    double hour_angle = (hour % 12) * 30 + (min * 0.5); // Updated formula
    double min_angle = min * 6;

    double difference = abs(hour_angle - min_angle);

    // Calculate the minimum angle
    if (difference > 180)
        difference = 360 - difference;

    cout << "The minimum angle is: " << difference << " degrees" << endl;

    return 0;
}