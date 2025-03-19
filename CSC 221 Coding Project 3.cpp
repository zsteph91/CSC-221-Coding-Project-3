// CSC 221 Coding Project 3.cpp : Program 2: Math Tutor

#include <iostream>
#include <string>
#include <random>
#include <iomanip>
using namespace std;
// insert math library

int main()
{
    int answer;
    int num1;
    int num2;

    // Display 2 random numbers, between 100 and 999, for user to solve before clicking enter to view the solution
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <> dist(100, 999);
    num1 = dist(gen);
    num2 = dist(gen);
    cout << setw(5) << num1 << endl << setw(2) << "+ " << setw(3) << num2 << endl;
    cout << endl << "Calculate the sum. " << endl << "Press 'Enter' to view the correct answer." << endl;
    cin.get();
    cout << setw(5) << num1 + num2 << endl;

    return 0;
}


