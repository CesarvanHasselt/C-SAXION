/*
    Filename: les3.cpp
    Author: Cesar van Hasselt
    Date: 28/feb/2025
    Description: Loops
    Version: 1.0
    License: MIT
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> product;
    vector<int> aantal;
    vector<double> prijs;
    string nieuwproduct = "";
    int hoeveelnieuwproduct = 0;
    double prijsnieuwproduct = 0;
    int hoeveelproducten = 0;

    cout << "Hoeveel producten wilt u plaatsen op de boodschappenlijst?" << endl;
    cin >> hoeveelproducten;

    for (int i = 0; i < hoeveelproducten; i++)
    {
        cout << "Voer product "<< i + 1 << " in:" << endl;
        cin >> nieuwproduct;
        product.push_back(nieuwproduct);

        cout << "Hoeveel stuks wilt u halen van dit product? " << endl;
        cin >> hoeveelnieuwproduct;
        aantal.push_back(hoeveelnieuwproduct);

        cout << "Wat is de prijs per stuk? " << endl;
        cin >> prijsnieuwproduct;
        prijs.push_back(prijsnieuwproduct);
    }
    cout << "Aantal:    Product:    Prijs:" << endl;
    for (int i = 0; i < hoeveelproducten; i++)
    {
        cout << aantal[i] << "\t" << product[i] << "\t" << prijs[i] << "\t\t" << endl;
    }

}
