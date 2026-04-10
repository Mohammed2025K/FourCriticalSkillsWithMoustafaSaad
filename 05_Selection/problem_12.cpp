// Read number X then read 6 numbers s1, e1, s2, e2, s3, e3 (s < e)
// ○ These 6 numbers are for 3 interval
// ○ Each Interval is a range [start, end]
// ○ Number X in a range if start <= X <= end
// ○ E.g 7 in range [5, 12] but not in range [10, 20]
// ● Print how many intervals that X is part of

#include <iostream>
using namespace std;
int main()
{
    int X, s1, s2, s3, e1, e2, e3, cnt = 0;

    cout << "Enter X: ";
    cin >> X;

    cout << "Enter s1: ";
    cin >> s1;
    cout << "Enter e1: ";
    cin >> e1;
    cout << "Enter s2: ";
    cin >> s2;
    cout << "Enter e2: ";
    cin >> e2;
    cout << "Enter s3: ";
    cin >> s3;
    cout << "Enter e3: ";
    cin >> e3;

    cnt += (X >= s1 && X <= e1);
    cnt += (X >= s2 && X <= e2);
    cnt += (X >= s3 && X <= e3);

    cout << cnt;

    return 0;
}