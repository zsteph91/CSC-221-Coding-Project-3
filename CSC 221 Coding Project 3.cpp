// CSC 221 Coding Project 3.cpp : Program 3: Interest Earned

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float amount; // Interest earned
    float principal; // Starting balance in account
    float rate; // interest rate
    float t; // * interest compounds/year
    float interest; // interest earned/year

    cout << "What is the interest rate? (Leave off the '%' symbol): ";
    cin >> rate;
    rate = rate / 100;

    cout << "How many times is this compounded? ";
    cin >> t;

    cout << "How much is already in the account? (Leave off '$' symbol): ";
    cin >> principal;

    amount = principal * (pow(1 + (rate / t), t));

    interest = amount - principal;

    cout << endl << endl;
    cout << left << setw(20) << "Interest Rate:" << right << setw(8) << rate * 100 << "%" << endl;
    cout << left << setw(20) << "Times Compounded:" << right << setw(9) << t << endl;
    cout << setprecision(2) << fixed;
    cout << left << setw(20) << "Principal:" << "$" << right << setw(8) << principal << endl;
    cout << left << setw(20) << "Interest:" << "$" << right << setw(8) << interest << endl;
    cout << left << setw(20) << "Amount in Savings:" << "$" << right << setw(8) << amount << endl;

    return 0;
}


