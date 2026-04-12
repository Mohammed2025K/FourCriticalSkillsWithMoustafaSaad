// Practice: Special Sum with for loop
// ● Read T for number of test cases. For each test case read integer N: number
// of numbers. Then read N numbers a, b, c, ….. and compute the sum of:
// ○ (a, b*b, c*c*c, d*d*d*d, e*e*e*e*e……)
// ○ That is the k-th number is repeated k times

#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (; T > 0; --T)
    {
        int N;
        cin >> N;

        int sum = 0;
        int cnt = 1;
        for (; N > 0; --N, ++cnt)
        {
            int num;
            cin >> num;

            int mul = 1;
            for (int N_cnt = cnt; N_cnt > 0; --N_cnt)
            {
                mul *= num;
            }
            sum += mul;
        }
        cout << "result of this group is: " << sum << "\n";
    }
    return 0;
}
