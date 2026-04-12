//  Read integer N (<500), then print all prime numbers <= N
// ○ Output should be comma separated, as below
// ■ Don’t print comma after the last number
// ● Input ⇒ Output
// ○ 18 ⇒ 2,3,5,7,11,13,17
// ■ No comma after last number!

#include <iostream>
using namespace std;

int main()
{
    int target;
    cin >> target;

    bool first_print = 1;

    for (int number = 2; number <= target; ++number)
    {
        bool is_prime = 1;

        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            if (!first_print)
                cout << ",";
            cout << number;
            first_print = 0;
        }
    }

    return 0;
}