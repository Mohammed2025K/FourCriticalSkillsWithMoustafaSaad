// Read number X then read 6 numbers s1, e1, s2, e2, s3, e3 (s < e)
// ○ These 6 numbers are for 3 interval
// ○ Each Interval is a range [start, end]
// ○ Number X in a range if start <= X <= end
// ○ E.g 7 in range [5, 12] but not in range [10, 20]
// ● Print how many intervals that X is part of

// way1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int X, s1, s2, e1, e2;

//     cout << "Enter s1: ";
//     cin >> s1;
//     cout << "Enter e1: ";
//     cin >> e1;
//     cout << "Enter s2: ";
//     cin >> s2;
//     cout << "Enter e2: ";
//     cin >> e2;

//     if (s1 >= s2 && s1 <= e2)
//         cout << s1;

//     if (e1 >= s2 && e1 <= e2)
//         cout << e1;

//     if (s2 >= s1 && s2 <= e1)
//         cout << s2;
//     if (e2 >= s1 && e2 <= e1)
//         cout << e2;
//     return 0;
// }

// --------------------------
// way_2
#include <iostream>
using namespace std;

int main()
{
    int s1, e1, s2, e2;

    cin >> s1 >> e1 >> s2 >> e2;

    if (e1 < s2 || e2 < s1)
    {
        cout << -1;
    }
    else
    {
        if (s1 < s2)
            s1 = s2;
        if (e1 > e2)
            e1 = e2;

        cout << s1 << ' ' << e1;
    }

    return 0;
}
