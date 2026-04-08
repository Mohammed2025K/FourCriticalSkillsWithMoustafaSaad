#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    bool is_even = (num % 2 == 0);
    bool is_odd = (num % 2 == 1);

    cout << is_even * 100 + is_odd * 7;
    return 0;
}