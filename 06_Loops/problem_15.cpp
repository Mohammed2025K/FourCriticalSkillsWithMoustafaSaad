// Read an integer N, then find its reverse integer R
// ○ Print R R*3
// ● input ⇒ Output
// ○ 123 ⇒ 321 963

#include <iostream>
using namespace std;

int main()
{
    int user_input;
    cin >> user_input;

    int reverse = 0;
    while (user_input != 0)
    {
        int num = user_input % 10;
        user_input /= 10;
        reverse = (reverse * 10) + num;
    }
    cout << reverse << " " << reverse * 3;

    return 0;
}