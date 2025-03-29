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

struct Deelnemer
{
    string NaamDeelnemer;
    int Score;
};

int main()
{
    int eersteplaats = 0;
    int tweedeplaats = 0;
    int derdeplaats = 0;
    int aantaldeelnemers = 0;
    int scoredeelnemer = 0;
    string naamdeelnemer = "";
    vector<Deelnemer> deelnemers;

    cout << "Voer het aantal deelnemers in: ";
    cin >> aantaldeelnemers;

    for (int i = 0; i < aantaldeelnemers; i++)
    {
        cout << "Voer de naam van deelnemer " << i + 1 << endl;
        cin >> naamdeelnemer;
        cout << "Voer de score in van " << naamdeelnemer << " in: " << endl;
        cin >> scoredeelnemer;
        deelnemers.push_back({ naamdeelnemer, scoredeelnemer });
    }

    for (int i = 0; i < aantaldeelnemers; i++) {
        if (eersteplaats == -1 || deelnemers[i].Score > deelnemers[eersteplaats].Score) {
            derdeplaats = tweedeplaats;
            tweedeplaats = eersteplaats;
            eersteplaats = i;
        }
        else if (tweedeplaats == -1 || deelnemers[i].Score > deelnemers[tweedeplaats].Score) {
            derdeplaats = tweedeplaats;
            tweedeplaats = i;
        }
        else if (derdeplaats == -1 || deelnemers[i].Score > deelnemers[derdeplaats].Score) {
            derdeplaats = i;
        }
    }


    cout << "Winnaars" << endl;
    cout << "1 " << deelnemers[eersteplaats].NaamDeelnemer << " (" << deelnemers[eersteplaats].Score << " punten)" << endl;
    cout << "2 " << deelnemers[tweedeplaats].NaamDeelnemer << " (" << deelnemers[tweedeplaats].Score << " punten)" << endl;
    cout << "3 " << deelnemers[derdeplaats].NaamDeelnemer << " (" << deelnemers[derdeplaats].Score << " punten)" << endl;
}