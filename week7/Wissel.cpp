/*
    Filename: Wissel.cpp
    Author: Cesar van Hasselt
    Date: 29/maart/2025
    Description: Loops
    Version: 1.0
    License: MIT
*/

#include <iostream>
#include <string>

using namespace std;

void wissel(int &val1, int &val2)
{
    int valtemp = val1;
    val1 = val2;
    val2 = valtemp;

}

int main()
{
    int val1 = 2;
    int val2 = 3;

    wissel(val1, val2);

    cout << val1 << " " << val2 << endl; // print 3 2
}