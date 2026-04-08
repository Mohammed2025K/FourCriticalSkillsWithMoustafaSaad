#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int x = num % 10;
    num /= 10;
    x += num % 10;
    num /= 10;
    x += num % 10;

    cout << x;
    return 0;
}
