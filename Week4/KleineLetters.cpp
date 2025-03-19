/*
    Filename: kleineletters.cpp
    Author: Cesar van Hasselt
    Date: 07/maart/2025
    Description: Loops
    Version: 1.0
    License: MIT
*/

#include <iostream>
#include <string>

using namespace std;

string verwijderhoofdletters(string gemixdeletters)
{
    int aantalletters = gemixdeletters.size();
    string verwerktetekts = "";
    for (int i = 0; i < aantalletters; i++)
    {
        int a = gemixdeletters[i];

        if ((a >= 'A') && (a <= 'Z'))
        {
            char letter = a + 32;
            verwerktetekts.push_back(letter);
        }
        else
        {
            char letter = a;
            verwerktetekts.push_back(letter);
        }

    }
    return verwerktetekts;
}

int main()
{
    string gemixdeletters = "";

    cout << "insert mixed letters" << endl;
    cin >> gemixdeletters;

    string verwerktetekts = verwijderhoofdletters(gemixdeletters);
    cout << verwerktetekts << endl;
}
