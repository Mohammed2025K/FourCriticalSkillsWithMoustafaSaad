// ● Read three numbers N, A, B. Print the summation of the numbers between 1
// and N whose sum of digits is between A and B.
// ● Input / Output
// ○ 20 2 5 ⇒ 84
// ■ Numbers whose sums of digits are between 2 and 5, are: 2,3,4,5,11,12,13,14, 20.
// ● E.g. digits sum of 13 is 4 : which is between (2, 5)
// ○ 10 1 2 ⇒ 13
// ○ 100 4 16 ⇒ 4554

#include <iostream>
using namespace std;

int main()
{
    int N, a, b;
    cin >> N >> a >> b;
    int total = 0;

    for (int i = 1; i <= N; ++i)
    {
        int tmp = i;
        int digits_sum = 0;
        while (tmp)
        {
            digits_sum += tmp % 10;
            tmp /= 10;
        }
        if (a <= digits_sum && digits_sum <= b)
        {
            total += i;
        }
    }

    cout << total;

    return 0;
}