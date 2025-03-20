// CSC 221 Coding Project 3.cpp : Program 1: Ingredient Adjuster

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float sugar; // amount of sugar used in original recipe
    float butter; // amount of butter used in original recipe
    float flower; // amount of flower used in original recipe
    float cookies; // total cookies made by original recipe
    float newCookie; // number of cookies user wants to make
    float ratio; // newCookie/cookies to determine how much each ingredient must be increased
    float newSugar; // amount of sugar needed for adjusted recipe
    float newButter; // amount of butter needed for adjusted recipe
    float newFlower; // amount of flower needed for adjusted recipe

    // original recipe values
    sugar = 1.5; // cups
    butter = 1.00; // cups
    flower = 2.75; // cups
    cookies = 48; // cups


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


