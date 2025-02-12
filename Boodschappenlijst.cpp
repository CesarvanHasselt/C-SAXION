/*

    Filename: boodschappenlijst.cpp
    Author: Cesar van Hasselt
    Date: 07/feb/2025
    Description: boodschappenlijst maken
    Version: 1.0
    License: MIT
*/
#include <iostream>

using namespace std;

string product_1;
string product_2;
string product_3;
string product_4;
string product_5;

int qwantproduct_1;
int qwantproduct_2;
int qwantproduct_3;
int qwantproduct_4;
int qwantproduct_5;

int main()
{
    cout << "Boodschaaaapppp OS 1.0\n";

    cout << "Insert item number 1\n";
    cin >> product_1;

    cout << "Insert item amount 1\n";
    cin >> qwantproduct_1;

    cout << "Insert item number 2\n";
    cin >> product_2;

    cout << "Insert item amount 2\n";
    cin >> qwantproduct_2;

    cout << "Insert item number 3\n";
    cin >> product_3;

    cout << "Insert item amount 3\n";
    cin >> qwantproduct_3;

    cout << "Insert item number 4\n";
    cin >> product_4;

    cout << "Insert item amount 4\n";
    cin >> qwantproduct_4;

    cout << "Insert item number 5\n";
    cin >> product_5;

    cout << "Insert item amount 5\n";
    cin >> qwantproduct_5;

    cout << product_1;

    cout << "exporting order list\n";
    cout << "Product                Amount\n";
    cout << "      " << product_1 << "               " << qwantproduct_1 << "\n";
    cout << "      " << product_2 << "               " << qwantproduct_2 << "\n";
    cout << "      " << product_3 << "               " << qwantproduct_3 << "\n";
    cout << "      " << product_4 << "               " << qwantproduct_4 << "\n";
    cout << "      " << product_5 << "               " << qwantproduct_5 << "\n";
}
