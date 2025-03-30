/*
    Filename: KleineLetter2.cpp
    Author: Cesar van Hasselt
    Date: 29/maart/2025
    Description: Loops
    Version: 1.0
    License: MIT
*/

#include <iostream>
#include <string>

using namespace std;

void DeleteCaptialLetters(string input, string &output)
{
    int aantalletters = input.size();
    string verwerktetekts = "";
    for (int i = 0; i < aantalletters; i++)
    {
        int a = input[i];

        if ((a >= 'A') && (a <= 'Z'))
        {
            char letter = a + 32;
            output.push_back(letter);
        }
        else
        {
            char letter = a;
            output.push_back(letter);
        }

    }
}

int main()
{
    string input = "";
    string output = "";

    cout << "insert mixed letters" << endl;
    cin >> input;

    DeleteCaptialLetters(input, output);

    cout << output << endl;
}