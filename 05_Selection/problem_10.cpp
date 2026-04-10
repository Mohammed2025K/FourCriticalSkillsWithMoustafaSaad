// Problem #1: Find Maximum of 10
// ● Read 10 integers, find which of them has the biggest value and print it.
// ● Inputs
// ○ 1 67 -9 88 -45 129 90 65 77 34 ⇒ 129
// ● Restriction: In your whole code there should be 2 integer variables defined
// ONLY
// ○ If it is hard constraint; code it in whatever way

#include <iostream>
using namespace std;
int main()
{
    int max, min;
    cout << "Enter number 1: ";
    cin >> max;
    cout << "Enter number 2: ";
    cin >> min;
    if (min >= max)
        max = min;

    cout << "Enter number 3: ";
    cin >> min;
    if (min >= max)
        max = min;

    cout << "Enter number 4: ";
    cin >> min;
    if (min >= max)
        max = min;

    cout << "Enter number 5: ";
    cin >> min;
    if (min >= max)
        max = min;

    cout << "Enter number 6: ";
    cin >> min;
    if (min >= max)
        max = min;

    cout << "Enter number 7: ";
    cin >> min;
    if (min >= max)
        max = min;

    cout << "Enter number 8: ";
    cin >> min;
    if (min >= max)
        max = min;

    cout << "Enter number 9: ";
    cin >> min;
    if (min >= max)
        max = min;

    cout << "Enter number 10: ";
    cin >> min;
    if (min >= max)
        max = min;

    cout << max;
    return 0;
}