#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T > 0)
    {
        int N;
        cin >> N;

        int sum = 0;
        int cnt = 1;
        while (N > 0)
        {
            int num;
            cin >> num;

            int N_cnt = cnt;
            int mul = 1;
            while (N_cnt > 0)
            {
                mul *= num;
                --N_cnt;
            }
            sum += mul;
            --N;
            ++cnt;
        }
        cout << "result of this groube is: " << sum << "\n";
        --T;
    }
    return 0;
}