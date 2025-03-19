// CSC 221 Coding Project 3.cpp : Program 1: Ingredient Adjuster

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float sugar;
    float butter;
    float flower;
    float cookies;
    float newCookie;
    float ratio;
    float newSugar;
    float newButter;
    float newFlower;

    sugar = 1.5;
    butter = 1.00;
    flower = 2.75;
    cookies = 48;


    cout << "How many cookies do you want to make? ";
    cin >> newCookie;
    cout << endl;

    ratio = newCookie / cookies;
    newSugar = ratio * sugar;
    newButter = ratio * butter;
    newFlower = ratio * flower;

    cout << "You will need: " << endl << endl << newSugar << " cups of sugar" << endl << newButter << " cups of butter" << endl << newFlower << " cups of flower"
        << endl;
    return 0;
}


