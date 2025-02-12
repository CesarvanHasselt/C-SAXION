/*
    Filename: boodschappenlijstv2.cpp
    Author: Cesar van Hasselt
    Date: 07/feb/2025
    Description: boodschappenlijst en prijs berekenen
    Version: 1.1
    License: MIT 
*/

#include <iostream>

using namespace std;


int main()
{
    string product_1 = "";
    string product_2 = "";
    string product_3 = "";
    string product_4 = "";
    string product_5 = "";

    int qwantproduct_1 = 0;
    int qwantproduct_2 = 0;
    int qwantproduct_3 = 0;
    int qwantproduct_4 = 0;
    int qwantproduct_5 = 0;

    double price_1 = 0.0;
    double price_2 = 0.0;
    double price_3 = 0.0;
    double price_4 = 0.0;
    double price_5 = 0.0;

    cout << "Boodschaaaapppp OS 1.1\n";

    cout << "Insert item number 1\n";
    cin >> product_1;
    cout << "Insert item amount 1\n";
    cin >> qwantproduct_1;
    cout << "Insert item price 1\n";
    cin >> price_1;

    cout << "Insert item number 2\n";
    cin >> product_2;
    cout << "Insert item amount 2\n";
    cin >> qwantproduct_2;
    cout << "Insert item price 2\n";
    cin >> price_2;

    cout << "Insert item number 3\n";
    cin >> product_3;
    cout << "Insert item amount 3\n";
    cin >> qwantproduct_3;
    cout << "Insert item price 3\n";
    cin >> price_3;

    cout << "Insert item number 4\n";
    cin >> product_4;
    cout << "Insert item amount 4\n";
    cin >> qwantproduct_4;
    cout << "Insert item price 4\n";
    cin >> price_4;

    cout << "Insert item number 5\n";
    cin >> product_5;
    cout << "Insert item amount 5\n";
    cin >> qwantproduct_5;
    cout << "Insert item price 5\n";
    cin >> price_5;

    cout << "exporting order list\n";
    cout << "Product\t" << "Amount\t" << "Price\n";
    cout << "" << product_1 << "\t" << qwantproduct_1 << "\t" << "$ " << price_1 * qwantproduct_1 << "\n";
    cout << "" << product_2 << "\t" << qwantproduct_2 << "\t" << "$ " << price_1 * qwantproduct_2 << "\n";
    cout << "" << product_3 << "\t" << qwantproduct_3 << "\t" << "$ " << price_1 * qwantproduct_3 << "\n";
    cout << "" << product_4 << "\t" << qwantproduct_4 << "\t" << "$ " << price_1 * qwantproduct_4 << "\n";
    cout << "" << product_5 << "\t" << qwantproduct_5 << "\t" << "$ " << price_1 * qwantproduct_5 << "\n";
}
