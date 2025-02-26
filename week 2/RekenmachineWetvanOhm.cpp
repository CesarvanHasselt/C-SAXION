/*

    Filename: RekenmachineWetvanOhm.cpp
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
    double ampere = 0;
    double volt = 0;
    double resistance = 0;
    string operatie = "";

    cout << "Simpele Rekenmachine\n";
    cout << "Welke grootheid wil je berekenen? Stroom Spanning of Weerstand\n";
    cin >> operatie;

    if ((operatie == "Stroom") || (operatie == "stroom"))
    {
        cout << "Voer de spanning (in volt)\n";
        cin >> volt;
        cout << "Voer de weerstand (in Ohm)\n";
        cin >> resistance;
        cout << "De spanning " << volt / resistance << " Ampere\n";
    }
    else if ((operatie == "Spanning") || (operatie == "spanning"))
    {
        cout << "Voer de stroom (in Ampere)\n";
        cin >> ampere;
        cout << "Voer de weerstand (in Ohm)\n";
        cin >> resistance;
        cout << "De spanning " << ampere * resistance << " Volt\n";
    }
    else if ((operatie == "Weerstand") || (operatie == "weerstand"))
    {
        cout << "Voer de spanning (in volt)\n";
        cin >> volt;
        cout << "Voer de stroom (in ampere)\n";
        cin >> ampere;
        cout << "De spanning " << volt / ampere << " ohm\n";
    }
}
