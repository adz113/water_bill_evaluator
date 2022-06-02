// water bill.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double q1 = 0;
    double q2 = 0;
    double q3 = 0;
    double q4 = 0;
    cout << "Please input your water bill for quarter 1: ";
    cin >> q1;
    cout << "Please input your water bill for quarter 2: ";
    cin >> q2;
    cout << "Please input your water bill for quarter 3: ";
    cin >> q3;
    cout << "Please input your water bill for quarter 4: ";
    cin >> q4;
    double monthlyAvg = (q1 + q2 + q3 + q4) / 12;
    if (monthlyAvg > 75) {
        cout << "Your average monthly bill is $" << monthlyAvg << ". You are using an excessive amount of water.";
    }
    else if (monthlyAvg < 75 && monthlyAvg > 25) {
        cout << "Your average monthly bill is $" << monthlyAvg << ". You are using a typical amount of water.";
    }
    else {
        cout << "Your average monthly bill is $" << monthlyAvg << ". Good job conserving water!";
    }
}
