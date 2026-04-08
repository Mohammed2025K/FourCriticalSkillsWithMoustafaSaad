#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    num /= 1000;

    int x = num % 10;

    cout << x;
    return 0;
}
