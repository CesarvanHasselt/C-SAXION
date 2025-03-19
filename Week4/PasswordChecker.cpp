/*
    Filename: kleineletters.cpp
    Author: Cesar van Hasselt
    Date: 07/maart/2025
    Description: Loops
    Version: 1.0
    License: MIT
*/


#include <iostream>
#include <string>

using namespace std;

string CheckPassword(string password)
{   
    bool CapitalLetter = false;
    bool SmallLetter = false;
    bool SpecialCharacter = false;
    bool Number = false;

    int passwordSize = password.size();
    if (passwordSize > 12); 
    {
        cout << "password size is bigger that 8 characters" << endl;
        for (int i = 0; i < passwordSize; i++)
        {
            int Character = password[i];
            cout << Character << endl;
            if ((Character >= 33)&&(Character <= 38)) //Special Character
            {
                SpecialCharacter = true;
                cout << "kleineletter" << endl;
            }
            else if ((Character >= 65) && (Character <= 90)) //Capital Letter
            {
                CapitalLetter = true;
                cout << "Capletter" << endl;
            }
            else if ((Character >= 97) && (Character <= 122)) //Small Letter
            {
                SmallLetter = true;
                cout << "Smallletter" << endl;
            }
            else if ((Character >= 48) && (Character <= 57)) //Number
            {
                Number = true;
                cout << "number" << endl;
            }
        }
        if ((SpecialCharacter = true) && (CapitalLetter = true) && (SmallLetter = true))
        {
            cout << SpecialCharacter << CapitalLetter << SmallLetter << Number << endl;
            return "wachtwoord is goed";
        }
        else
        {
            return "not gut";
        }
    }
}

int main()
{
    string password = "";
    cout << "Insert password" << endl;
    cin >> password;
    string checked = CheckPassword(password);
    cout << checked;
}

