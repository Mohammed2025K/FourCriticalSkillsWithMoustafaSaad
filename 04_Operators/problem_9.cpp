#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    bool is_even1 = (num % 2 == 0);

    bool is_even2 = ((num / 2) * 2 == num);

    int last_d = num % 10;
    bool is_even3 = (last_d == 0 || last_d == 2 || last_d == 4 || last_d == 6 || last_d == 8);

    double by2 = num / 2.0;
    by2 = by2 - (int)by2;
    bool is_even4 = (by2 == 0);

    cout << is_even1 << is_even2 << is_even3<< is_even4;
    return 0;
}
