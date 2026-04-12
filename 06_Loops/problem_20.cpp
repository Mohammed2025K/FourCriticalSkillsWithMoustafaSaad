// Read N, M, W. Find all triples that has
// A + B <= C where
// ○ 1 <= A <= N
// ○ A <= B <= M
// ○ 1 <= C <= W

#include <iostream>
using namespace std;

int main()
{
    int n, m, w;
    cin >> n >> m >> w;

    int result = 0;
    for (int a = 1; a <= n; ++a)
    {
        for (int b = a; b <= m; ++b)
        {
            int c = a + b;
            if (c >= 1 && c <= w)
                result += w - c + 1;
        }
    }
    cout << result;
    return 0;
}
