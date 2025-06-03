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
#include <string>

using namespace std;

int main()
{   
    int maxscore = 0;
    int spelernummer = 0;
    int aantaldeelnemers = 0;
    string naamdeelnemer = "";
    int scoredeelnemer = 0;
    vector<string> deelnemer;
    vector<int> score;

    cout << "Voer het aantal deelnemers in: " << endl;
    cin >> aantaldeelnemers;
    for (int i = 0; i < aantaldeelnemers; i++)
    {
        cout << "Voer de naam in van deel nemer" << i + 1 << endl;
        cin >> naamdeelnemer;
        deelnemer.push_back(naamdeelnemer);
        cout << "Voer de score in van deelnemer 1" << endl;
        cin >> scoredeelnemer;
        score.push_back(scoredeelnemer);
    }

    for (int i = 0; i < aantaldeelnemers; i++)
    {
        if (score[i] > maxscore)
        {
            maxscore = score[i];
            naamdeelnemer = deelnemer[i];
       }
    }
    cout << "De winaar is: " << naamdeelnemer << "met een score van: " << maxscore << endl;
}
