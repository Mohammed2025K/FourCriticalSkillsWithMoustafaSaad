// ● Read an integer N and M, then print NxM lines for their multiplication table.
// ● Input 3 4

#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int N_cnt = 1;
    while (N_cnt <= N)
    {
        int M_cnt = 1;
        while (M_cnt <= M)
        {
            cout << N_cnt << " * " << M_cnt << " = " << N_cnt * M_cnt << "\n";
            ++M_cnt;
        }

        ++N_cnt;
    }
    return 0;
}