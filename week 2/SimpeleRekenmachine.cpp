/*

    Filename: SimpeleRekenmachine.cpp
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
    double getal1 = 0;
    double getal2 = 0;
    double uitkomst = 0;
    string operatie = "";

    cout << "Simpele Rekenmachine\n";
    cout << "wilt u optellen +, aftrekken -, vermenigvuldigen * of delen /\n";
    cout << "vul een waarde in voor de operator en het eerste getal en het tweede getal\n";
    cin >> operatie;
    cin >> getal1;
    cin >> getal2;
    

    cout << operatie << " " << getal1 << " " << getal2 << "\n";
   

    if ((operatie == "optellen")||(operatie == "+"))
    {
        uitkomst = getal1 + getal2;
    }
    else if ((operatie == "aftrekken") || (operatie == "-"))
    {
        uitkomst = getal1 - getal2;
    }
    else if ((operatie == "vermenigvuldigen") || (operatie == "*"))
    {
        uitkomst = getal1 * getal2;
    }
    else if ((operatie == "delen") || (operatie == "/"))
    {
        uitkomst = getal1 / getal2;
    }
    cout << "Het resultaat van " << getal1 << " " << operatie << " " << getal2 << " is " << uitkomst;

}
