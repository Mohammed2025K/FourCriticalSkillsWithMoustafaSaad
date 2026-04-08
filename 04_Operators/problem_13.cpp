#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    int year = age / 360;
    age %= 360;

    int month = age / 30;
    age %= 30;

    cout << year << month << age;
    return 0;
}