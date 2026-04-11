// Read an integer X, find all numbers divisible
// by 3 from 1 to X.
// ○ These are 3, 6, 9, 12, 15, 18, ….. (multiple of 3)

#include <iostream>
using namespace std;

int main()
{
    int x, cnt = 1;

    cout << "Enter x: ";
    cin >> x;

    while (cnt < x)
    {
        if (cnt % 3 == 0)
        {
            cout << cnt<<"\n";
        }

        ++cnt;
    }

    return 0;
}