/*

    Filename: operaties.cpp
    Author: Cesar van Hasselt
    Date: 14/feb/2025
    Description: boodschappenlijst maken
    Version: 1.0
    License: MIT
*/
#include <iostream>

using namespace std;

int main()
{
    int val1 = 0;
    int val2 = 0;

    cout << "voeg 2 waardes in om te vergelijken\n";
    cout << "voer waarrde 1 in\n";
    cin >> val1;
    cout << "voer waarrde 1 in\n";
    cin >> val2;

    if (val1 > val2)
    {
        cout << "waarde 1 is groter dan waarde 2\n";
        cout << "de som van waarde 1 en 2 is:\n";
        cout << val1 + val2;
    }
    else if (val2 < val1)
    {
        cout << "waarde 2 is groter dan waarde 1\n";
        cout << "de som van waarde 2 en 1 is:\n";
        cout << val2 + val1;
    }
}

