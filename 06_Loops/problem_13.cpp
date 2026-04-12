// ● Input: Read integer T for a number of test cases.
// ● For each test case read integer N followed by reading N integers.
// ● Output: For each test case, print the minimum of the N integers.

#include <iostream>
using namespace std;

int main()
{
    int num_of_groubes;
    cout << "How many groubes do you have? ";
    cin >> num_of_groubes;

    while (num_of_groubes > 0)
    {
        int count_of_numbers;
        int num;

        cout << "How many numbers do you have? ";
        cin >> count_of_numbers;
        cin >> num;
        int min = num;
        while (count_of_numbers > 1)
        {
            cin >> num;
            if (num < min)
                min = num;
            --count_of_numbers;
        }
        cout << min << '\n';

        --num_of_groubes;
    }

    return 0;
}