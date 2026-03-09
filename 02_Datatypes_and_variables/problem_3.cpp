/*
https://web.archive.org/web/20170810175653/http://www.acmaast.com/problem.php?id=83

Given 8 space-separated integers, find the sum of those in even places and the sum of those in odd places.

Note: Even place means the 2nd, 4th, 6th or 8th numbers, while odd places are the 1st, 3rd, 5th and 7th numbers.

Example Input:
11 2 7 9 12 -8 3 -1

Example Output:
2 33

Example Explanation:
2 + 9 + (-8) + (-1) = 2
11 + 7 + 12 + 3 = 33
*/

#include <iostream>
using namespace std;

int main()
{
    float even1, even2, even3, even4;
    float odd1, odd2, odd3, odd4;

    cout << "Input: ";
    cin >> even1 >> odd1 >> even2 >> odd2 >> even3 >> odd3 >> even4 >> odd4;

    cout << "Output: " << (even1 + even2 + even3 + even4) / 4 << " " << (odd1 + odd2 + odd3 + odd4) / 4;

    return 0;
}