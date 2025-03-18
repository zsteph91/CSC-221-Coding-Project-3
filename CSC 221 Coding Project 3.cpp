// CSC 221 Coding Project 3.cpp : Program 1: Ingredient Adjuster
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float sugar;
    float butter;
    float flower;
    int cookies;
    int newCookie;

    sugar = 1.5;
    butter = 1.00;
    flower = 2.75;
    cookies = 48;

    cout << "How many cookies do you want to make? ";
    cin >> newCookie;

    cout << "It takes " << sugar << " cups of sugar, " << butter << " cup of butter, and " << flower
        << " cups of flower to make " << cookies << " cookies." << newCookie << endl;
    return 0;
}


