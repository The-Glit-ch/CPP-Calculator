// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int FirstNumber = 0;
int SecondNumber = 0;
string OPType = "N";
string Done = "A";
//Setting Up Variables

int addition(int V1, int V2) 
{
    return V1 + V2;
}

int subtraction(int V1, int V2) 
{
    return V1 - V2;
}

int multiplication(int V1, int V2) 
{
    return V1 * V2;
}

int division(int V1, int V2) 
{
    return V1 / V2;
}


int main()
{
    cout << "Enter in the first value\n";
    cin >> FirstNumber;
    cout << "Now enter in the second value\n";
    cin >> SecondNumber;
    cout << "Now select the operation type\n";
    cout << "A for addition\nS for subtraction\nM for multiplication\nD for division\n";
    cin >> OPType;
    try {
        if (OPType == "A" || OPType == "a") {
            cout << FirstNumber << " + " << SecondNumber << " = " << addition(FirstNumber,SecondNumber) << "\n";
            cin >> Done;
        }
        else if (OPType == "S" || OPType == "s") {
            cout << FirstNumber << " - " << SecondNumber << " = " << subtraction(FirstNumber, SecondNumber) << "\n";
            cin >> Done;
        }
        else if (OPType == "M" || OPType == "m") {
            cout << FirstNumber << " * " << SecondNumber << " = " << multiplication(FirstNumber, SecondNumber) << "\n";
            cin >> Done;
        }
        else if (OPType == "D" || OPType == "d") {
            cout << FirstNumber << " / " << SecondNumber << " = " << division(FirstNumber, SecondNumber) << "\n";
            cin >> Done;
        }
        else
        {
            cout << "Invalid Operation Type\n";
            cin >> Done;
        }
    }
    catch (...) {
        cout << "Invalid Input";
        cin >> Done;
    }
}
