/*
Homework 1: Math operations
Write a program that reads 2 numbers and print their + - * / as following

Input
12 3

Output
12 + 3 = 15
12 - 3 = 9
12 / 3 = 4
12 * 3 = 36

Do good testing for your code
E.g. consider zero as first or 2nd number
E.g. consider negative values
E.g. even and odd values
E.g. try the MAX of int: 2147483647

*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    cout << "This program make ( + , - , * , / ) operations on your number\n\n";
    float first, second;

    cout << "Add first number then second number: ";
    cin >> first >> second;

    cout << first << " + " << second << " = " << first + second << "\n";
    cout << first << " - " << second << " = " << first - second << "\n";
    cout << first << " * " << second << " = " << first * second << "\n";
    cout << first << " / " << second << " = " << first / second << "\n";
}