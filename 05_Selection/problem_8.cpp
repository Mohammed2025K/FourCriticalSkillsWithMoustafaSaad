// Problem #3: Maximum but constrained
// ● Given 3 integers, you have to find the biggest one of them which is < 100.
// ○ Print -1 if no such number

// way 1
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, c, temp;
//     cin >> a >> b >> c;

//     if (a < 100 || b < 100 || c < 100)
//     {
//         // Sort
//         if (b < a)
//         {
//             temp = a;
//             a = b;
//             b = temp;
//         }
//         if (c < b)
//         {
//             temp = b;
//             b = c;
//             c = temp;

//             if (b < a)
//             {
//                 temp = a;
//                 a = b;
//                 b = temp;
//             }
//         }

//         // comparing with 100
//         if (c < 100)
//             cout << c;
//         else if (b < 100)
//             cout << b;
//         else
//             cout << a;
//     }
//     else
//         cout << -1;

//     return 0;
// }

// ----------------------------------
// way2
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, c, result;
//     cin >> a >> b >> c;

//     result = -1;

//     if (a < 100 && a > result)
//         result = a;
//     if (b < 100 && b > result)
//         result = b;
//     if (c < 100 && c > result)
//         result = c;

//     cout << result;

//     return 0;
// }

// ----------------------------------
// way3

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int res = -1;

    // The next 3 if conditions: let's try to initalize res correctly
    if (a < 100)
        res = a;

    if (b < 100)
        res = b;

    if (c < 100)
        res = c;

    // The next 3 if conditions: let's get the valid max
    if (a < 100 && a > res)
        res = a;

    if (b < 100 && b > res)
        res = b;

    if (c < 100 && c > res)
        res = c;

    cout << res << "\n";

    return 0;
}

// Try -20 -10 -30
