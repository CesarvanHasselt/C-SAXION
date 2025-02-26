/*

    Filename: les2.cpp
    Author: Cesar van Hasselt
    Date: 12/feb/2025
    Description:Bool introductie
    Version: 1.0
    License: MIT
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int getal = 0;
    bool b1 = (5 == 6);
    bool b2 = (5 != 6);
    bool b3 = (5 < 6);
    bool b4 = (5 <= 6);
    bool b5 = ("woord" == "woord");
    bool b6 = ((5 == 6) || (7 == 7));
    bool b7 = ((5 == 6) && (7 == 7));

    cout << "(5 == 6)\t" << b1 << endl;
    cout << "(5 != 6)\t" << b2 << endl;
    cout << "(5 < 6)\t" << b3 << endl;
    cout << "(5 <= 6)\t" << b4 << endl;
    cout << "woord en woord gelijk?\t" << b5 << endl;
    cout << "((5 == 6) || (7 == 7))\t" << b6 << endl;
    cout << "((5 == 6) && (7 == 7))\t" << b7 << endl;
    //if statiments
    cout << "vul vol getal in\n";
    cin >> getal;
    if (getal > 5)
    {
        cout << "getal is groter dan 5\n";
    }
    else
    {
        cout << "getal is kleiner of gelijk aan 5\n";
    }

    if (getal < 10)
    {
        cout << "getal is kleiner dan 10\n";
    }
    else if ((getal <= 10) && (getal <= 20))
    {
        cout << "getal is tussen 10 en 20\n";
    }
    else
    {
        cout << "getal is groter dan 10\n";
    }
    //entree prijs 
    //vraag leeftijd
    //print prijs kaartje
    // if leeftijd < 12 prijs 10 anders 12 en als ouder dan 65 gratis
    
    int leeftijd = 0;
    cin >> leeftijd;

    cout << "entree prijs\t uw leeftijd?";

    if (leeftijd < 12)
    {
        cout << "10 euro\n";
    }
    else if ((leeftijd >= 12) && (leeftijd <= 65))
    {
        cout << "12 euro\n";
    }
    else
    {
        cout << "0 euro\n";
    }
}