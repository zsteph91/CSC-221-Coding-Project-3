// CSC 221 Coding Project 3.cpp : Program 3: Interest Earned
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    float amount; // Interest earned
    float principle; // Starting balance in account
    float rate; // interest rate
    float t; // * interest compounds/year
    float interest;

    cout << "What is the interest rate? (Leave off the '%' symbol): ";
    cin >> rate;
    rate = rate / 100;

    cout << "How many times is this compounded? (1, 4, 12): ";
    cin >> t;

    cout << "How much is already in the account? ";
    cin >> principle;

    amount = principle * (pow(1 + (rate / t), t));

    interest = amount - principle;

    cout << "Interest Rate: " << rate * 100 << "%" << endl
        << "Times Compounded: " << t << endl
        << "Principle: " << principle << endl
        << "Interest: " << interest << endl
        << "Amount in Savings: " << amount << endl;

    return 0;
}


