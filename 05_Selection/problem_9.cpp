// Write a program that reads number X, then other 5 numbers. Print 2 values:
// ○ How many numbers <= X
// ○ How many numbers > X

// Way 1
// #include <iostream>
// using namespace std;

// int main()
// {
//     int X, a, b, c, d, e, bigger_than_x = 0, smaller_than_x = 5;

//     cin >> X >> a >> b >> c >> d >> e;

//     if (a > X)
//         ++bigger_than_x;
//     if (b > X)
//         ++bigger_than_x;
//     if (c > X)
//         ++bigger_than_x;
//     if (d > X)
//         ++bigger_than_x;
//     if (e > X)
//         ++bigger_than_x;

//     cout << "Begger than X: " << bigger_than_x << "\n" << "Smaller than X: " << smaller_than_x - bigger_than_x;
//     return 0;
// }

// -------------------------
// Way 2
#include <iostream>
using namespace std;

int main()
{
    int X, a, b, c, d, e, bigger_than_x = 0, smaller_than_x = 5;

    cin >> X >> a >> b >> c >> d >> e;

    bigger_than_x += (a > X);
    bigger_than_x += (b > X);
    bigger_than_x += (c > X);
    bigger_than_x += (d > X);
    bigger_than_x += (e > X);

    cout << "Begger than X: " << bigger_than_x << "\n"
         << "Smaller than X: " << smaller_than_x - bigger_than_x;
    return 0;

    return 0;
}