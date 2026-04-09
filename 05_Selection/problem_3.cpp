// Way 1
// #include <iostream>
// using namespace std;

// int main()
// {
//     int first, second, third;

//     cin >> first >> second >> third;

//     if (first < second)
//     {
//         if (first < third)
//             cout << first;
//         else
//             cout << third;
//     }
//     else
//     {
//         if (second < third)
//             cout << second;
//         else
//             cout << third;
//     }

//     return 0;
// }
// ----------------------------------------------------------
// Way 2
// #include <iostream>
// using namespace std;

// int main()
// {
//     int first, second, third;

//     cin >> first >> second >> third;

//     if (first < second && first < third)
//         cout << first;
//     else if (second < first && second < third)
//         cout << second;
//     else
//         cout << third;

//     return 0;
// }

// ---------------------------------------------
// Way 3
#include <iostream>
using namespace std;

int main()
{
    int first, second, third;

    cin >> first >> second >> third;

    int minimam = first;
    if (second < minimam)
        minimam = second;
    if (third < minimam)
        minimam = third;

    cout << minimam;
    return 0;
}