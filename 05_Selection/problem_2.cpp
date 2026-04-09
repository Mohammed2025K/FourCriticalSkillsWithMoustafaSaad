#include <iostream>
using namespace std;

int main()
{
    int first, second;

    cin >> first >> second;

    if (first > second)
        cout << first;
    else if (second > first)
        cout << second;
    else
        cout << "Equal";

    return 0;
}