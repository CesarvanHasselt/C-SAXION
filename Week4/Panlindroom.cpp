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

bool CheckPalindroom(string StringtoCheck)
{
    int StringLength = StringtoCheck.size();
    int HalfString = StringtoCheck.size() / 2;
    cout << StringLength << "   " << HalfString << endl;

    for (int i = 0; i < StringLength; i++)
    {
        cout << "comparing " << i << StringtoCheck[i] << " with " << i - StringLength << StringtoCheck[StringLength - i - 1] << endl;
        if (StringtoCheck[i] == StringtoCheck[StringLength - i - 1])
        {
            cout << "good" << endl;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    bool Panlindroom = false;

    string StringtoCheck = "";
    cin >> StringtoCheck;

    Panlindroom = CheckPalindroom(StringtoCheck);

    cout << "is het een Palindroom ?" << endl;
        if (Panlindroom == true)
        {
            cout << "Ja het is een Palindroom";
    }
        else
        {
            cout << "Nee het is niet een Palindroom";
        }

}