#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N % 2 == 0)
        cout << N % 10;
    else
    {
        if (N < 1000)
            cout << N % 100;
        else if (N > 1000 && N < 1000000)
            cout << N % 10000;
        else
            cout << -N;
    }
    return 0;
}