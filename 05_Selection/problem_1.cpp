#include <iostream>
using namespace std;

int main()
{
    int first, second;
    char op;

    cin >> first >> op >> second;

    if (op == '+')
        cout << first + second;
    else if (op == '-')
        cout << first - second;
    else if (op == '*')
        cout << first * second;
    else if (op == '/')
        cout << first / second;
    else
        cout << "invalid";

    return 0;
}