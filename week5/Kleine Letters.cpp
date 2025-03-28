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

class invalid_Character {};

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
        else if ((a >= 'a') && (a <= 'z'))
        {
            char letter = a;
            verwerktetekts.push_back(letter);
        }
        else
        {
            throw invalid_Character{};
        }

    }
    return verwerktetekts;
}

int main()
{
    string gemixdeletters = "";

    cout << "insert mixed letters" << endl;
    cin >> gemixdeletters;

    try 
    {
        string verwerktetekts = verwijderhoofdletters(gemixdeletters);
        cout << verwerktetekts << endl;
    }
    catch (const invalid_Character)
    {
        cout << "De string behoort enkel alfabetische letters te bevatten" << endl;
    }

}