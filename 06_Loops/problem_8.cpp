// Problem #: Print face down left angled triangle

#include <iostream>
using namespace std;

int main()
{
    int num, row_count, star_count;
    cin >> num;

    row_count = num;
    while (row_count > 0)
    {
        star_count = row_count;
        while (star_count > 0)
        {
            cout << "*";
            star_count--;
        }
        cout << "\n";
        row_count--;
    }

    return 0;
}