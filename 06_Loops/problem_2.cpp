//  Read 2 integers X and Y and compute XY
// ○ This means X * X * X ….. Y times
// ○ E.g = 25= 2 * 2 * 2 * 2 * 2

#include <iostream>
using namespace std;

int main()
{
    int num, pow;

    cin >> num >> pow;

    int result = 1;

    while (pow > 0)
    {
        result *= num;

        --pow;
    }

    cout << result;

    return 0;
}