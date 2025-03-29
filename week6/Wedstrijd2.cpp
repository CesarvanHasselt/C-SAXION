/*
    Filename: Wedstrijd2.cpp
    Author: Cesar van Hasselt
    Date: 29/maart/2025
    Description: Loops
    Version: 1.0
    License: MIT
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    struct Deelnemer
    {
        string NaamDeelnemer;
        int Score;
    };

    int maxscore = 0;
    string winnaar;
    int aantaldeelnemers = 0;

    vector<Deelnemer> deelnemers; 

    cout << "Voer het aantal deelnemers in: ";
    cin >> aantaldeelnemers;


    for (int i = 0; i < aantaldeelnemers; i++) {
        string naamdeelnemer;
        int scoredeelnemer;

        cout << "Voer de naam in van deelnemer " << i + 1 << ": ";
        cin >> naamdeelnemer;
        cout << "Voer de score in van deelnemer " << i + 1 << ": ";
        cin >> scoredeelnemer;
        deelnemers.push_back({ naamdeelnemer, scoredeelnemer });
    }


    for (int i = 0; i < aantaldeelnemers; i++) {
        if (deelnemers[i].Score > maxscore) {
            maxscore = deelnemers[i].Score;
            winnaar = deelnemers[i].NaamDeelnemer;
        }
    }


    cout << "Winner, chicken dinner! " << winnaar << " met een score van " << maxscore << endl;

    return 0;
}
