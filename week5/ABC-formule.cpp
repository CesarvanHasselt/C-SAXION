/*
    Filename: ABC-formule.cpp
    Author: Cesar van Hasselt
    Date: 19/maart/2025
    Description: Loops
    Version: 1.0
    License: MIT
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class invalid_ABC_Values {};

bool oplossen_kwadratische_formule(double a, double b, double c)
{
    double d = 0;
    d = (b * b) - 4*a*c;
    if (d >= 0)
    {
        double andwoord1 = (-b + sqrt(d)) / (2 * a);
        double andwoord2 = (-b - sqrt(d)) / (2 * a);
        cout << andwoord1 << andwoord2 << endl;
    }
    else
    {
        throw invalid_ABC_Values{};
        return true;
    }
}

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout << " ABC-formule\t" << endl;
    cout << " Vol de waarrdes in voor A B en C\t" << endl;
    cout << " Vol de waarrdes in voor A\t" << endl;
    cin >> a;
    cout << " Vol de waarrdes in voor B\t" << endl;
    cin >> b;
    cout << " Vol de waarrdes in voor C\t" << endl;
    cin >> c;

    try
    {
        bool oplosbaar = oplossen_kwadratische_formule(a, b, c);
    }
    catch (const invalid_ABC_Values&)
    {
        cout << "De vergelijking kan niet worden opgelost, omdat de discriminant negatief is.\n";
    }


}