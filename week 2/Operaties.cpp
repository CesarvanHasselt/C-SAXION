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
    cout << "voer waarde 1 in\n";
    cin >> val1;
    cout << "voer waarde 2 in\n";
    cin >> val2;

    if (val1 > val2)
    {
        cout << "waarde 1: " << val1 << " is groter dan waarde 2: " << val2 << "\n";
        cout << "de kleinste waarde is: " << val2 << "\n";
    }
    else if (val2 > val1)
    {
        cout << "waarde 2: " << val2 << " is groter dan waarde 1: " << val1 << "\n";
        cout << "de kleinste waarde is: " << val1 << "\n";
    }
    else
    {
        cout << "de 2 waardes zijn gelijk\n";
    }

    cout << "de som van waarde 1 en 2 is:\n";
    cout << val1 + val2 << "\n";

    cout << "het verschil van waarde 1 en 2 is (val1 - val2):\n";
    cout << val1 - val2 << "\n";

    cout << "het product van waarde 1 en 2 is:\n";
    cout << val1 * val2 << "\n";
}
