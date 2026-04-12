// Problem #3: Print left angled triangle
// ● Read integer N, then print a left angled triangle that has N rows as below:

#include <iostream>
using namespace std;

int main()
{
    int num, row_count = 0, stars_count = 0;
    cin >> num;

    while (num > row_count)
    {
        row_count++;
        stars_count = row_count;
        while (stars_count > 0)
        {
            cout << "*";
            stars_count--;
        }
        cout << "\n";
    }
    return 0;
}