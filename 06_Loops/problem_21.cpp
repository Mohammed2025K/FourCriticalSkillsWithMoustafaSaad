// A popular math sequence
// ○ First 2 numbers: 0 1
// ○ Then each number is sum of last 2 numbers:
// ■ 0 1 1 2 3 5 8 13 21 34
// ● E.g. 13 = 5 + 8
// ● E.g. 34 = 13+21

#include <iostream>
using namespace std;

int main()
{
    int range;
    cin >> range;
    for (int old_n = 0, new_n = 1, result = 0; range > 0; result = old_n + new_n,
             old_n = new_n,
             new_n = result, --range)
    {
        cout << result << " ";
    }
    return 0;
}
