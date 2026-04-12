// ● Read an Integer N, then print an X using * as following
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; ++row)
    {
        for (int star = 1; star <= n; ++star)
        {
            if (star == row || star == n - row + 1)
                cout << "*";
            else
            {
                cout << "-";
            }
        }
        cout << "\n";
    }

    return 0;
}