// Read N, M, SUM. Find all pairs that has
// A + B == SUM where
// ○ 1 <= A <= N
// ○ 1 <= B <= M
// ● Try input
// ○ 1000000 1000000 1000000
// ○ How many steps the code do?
#include <iostream>
using namespace std;

int main()
{
    int n, m, sum;
    cin >> n >> m >> sum;
    int result = 0;
    for (int a = 1; a <= n; ++a)
    {
        int b = sum - a;

        if (1 <= b && b <= m)
            ++result;
    }

    cout << result;

    return 0;
}
