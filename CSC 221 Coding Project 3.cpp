// CSC 221 Coding Project 3.cpp : Program 2: Math Tutor
//

#include <iostream>
#include <string>
#include <random>
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
    cout << num1 << " " << num2 << endl;
    cout << "What is the sum of these two numbers? ";
    cin >> answer;
    cout << "The correct answer is: " << num1 + num2 << endl;

    return 0;
}


