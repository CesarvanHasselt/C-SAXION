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
    vector<double> getallen;
    int aantalGetallen = 0;
    double getal = 0;
    double som = 0;
    double min = 0;
    double max = 0;

    cout << "hoe veel getallen\n";
    cin >> aantalGetallen;

    for (int i = 0; i < aantalGetallen; i++)
    {
        cout << "voer getal " << i + 1 << " in\n";
        cin >> getal;
        getallen.push_back(getal);
    }

    min = getallen[0];
    max = getallen[0];

    for (int i = 0; i < getallen.size(); i++)
    {
        som = som + getallen[i];
        cout << "getallen ding " << getallen[i] << "\n";

        if (getallen[i] > max)
        {
            max = getallen[i];
        }
        else if (getallen[i] < min)
        {
            min = getallen[i];
        }
    }

    cout << "De kleinste waarde is: " << min << "\n";
    cout << "De grootste waarde is: " << max << "\n";
    cout << "De totale waarde is: " << som << "\n";
    cout << "De gemiddelde waarde is: " << som / (double)aantalGetallen << "\n";
}


