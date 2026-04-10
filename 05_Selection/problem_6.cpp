// ● Given 3 integers, sort (order) them in ascending order and print them .

// Way 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;

//     if (a < b && b<c)
//         cout << a << b << c;
//     else if (a < c && c < b)
//         cout << a << c << b;
//     else if (b < a && a < c)
//         cout << b << a << c;
//     else if (b < c && c < a)
//         cout << b << c << a;
//     else if (c < a && a < b)
//         cout << c << a << b;
//     else if (c < b && b < a)
//         cout << c << b << a;
//     return 0;
// }

// -----------------------------------
// Way 2
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, temp;
    cin >> a >> b >> c>> d;

    if (b < a)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if (c < b)
    {
        temp = b;
        b = c;
        c = temp;

        if (b < a)
        {
            temp = a;
            a = b;
            b = temp;
        }
    }
    if (d < c)
    {
        temp = c;
        c = d;
        d = temp;

        if (c < b)
        {
            temp = b;
            b = c;
            c = temp;

            if (b < a)
            {
                temp = a;
                a = b;
                b = temp;
            }
        }
    }
    cout << a << b << c << d;

    return 0;
}
