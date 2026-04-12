// Count how many (a, b, c, d) with following property:
// ○ 1 <= a, b, c, d <= 200
// ○ a + b = c + d
// ● Code it once using 4 loops
// ○ How much time does it take!
// ● Code it once using 3 loops only

#include <iostream>
using namespace std;

int main()
{
    int result = 0;
    for (int a = 1; a <= 200; ++a)
    {
        for (int b = 1; b <= 200; ++b)
        {
            for (int c = 1; c <= 200; ++c)
            {
                int d = a + b - c;
                if (d >= 1 && d <= 200)
                {
                    ++result;
                }
            }
        }
    }
    cout << result;
    return 0;
}