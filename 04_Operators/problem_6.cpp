#include <iostream>
using namespace std;

int main()
{
    double a = 0, b = 0, c = 0, d = 0, e = 0;

    cin >> a >> b >> c >> d >> e;

    cout << (a + b + c + d + e) / 5 << "\n";
    cout << (a + b + c) / (d + e) << "\n";
    cout << ((a + b + c) / 3) / ((d + e) / 2) << "\n";

    return 0;
}
