#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N < 10000)
        cout << "This is small number";
    else
    {
        int last1 = (N % 10);
        N /= 10;
        int last2 = (N % 10);
        N /= 10;
        int last3 = (N % 10);
        int sum = last1 + last2 + last3;

        if (sum % 2 == 1)
            cout << "This is great number";
        else
        {
            if (last1 % 2 == 1 || last2 % 2 == 1 || last3 % 2 == 1)
                cout << "This is good number";
            else
                cout << "This is bad number";
        }
    }
    return 0;
}