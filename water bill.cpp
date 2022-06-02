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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
