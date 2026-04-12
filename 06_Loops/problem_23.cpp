// ● Count How many X, Y numbers such that
// ○ X in range [50-300]
// ○ Y in range [70-400]
// ○ X < Y
// ○ (X+Y) divisible by 7

// way 1
// #include <iostream>
// using namespace std;

// int main()
// {
//     int result = 0;

//     for (int x = 50; x <= 300; ++x)
//     {

//         int start = 70;
//         if (start < x + 1)
//             start = x + 1;

//         for (int y = start; y <= 400; ++y)
//         {
//             if (x < y && (x + y) % 7 == 0)
//                 ++result;
//         }
//     }
//     cout << result;
//     return 0;
// }

// way 2

// #include <iostream>
// using namespace std;

// int main()
// {
//     int result = 0;

//     for (int x = 50; x <= 300; ++x)
//     {

//         int start = 70;
//         if (start < x + 1)
//             start = x + 1;

//         for (int y = start; y <= 400; ++y)
//         {
//             if (x < y && (x + y) % 7 == 0)
//                 ++result;
//         }
//     }
//     cout << result;
//     return 0;
// }

// way 3

// #include <iostream>
// using namespace std;

// int main()
// {
//     int result = 0;

//     for (int x = 50; x <= 300; ++x)
//     {
//         for (int y = max(70, x + 1); y <= 400; ++y)
//         {
//             if ((x + y) % 7 == 0)
//                 ++result;
//         }
//     }
//     cout << result;
//     return 0;
// }

// way 4 -smarter way
#include <iostream>
using namespace std;

int main()
{
    int result = 0;

    for (int x = 50; x <= 300; ++x)
    {
        int ystart = max(70, x + 1);

        int first = (x + ystart) % 7;
        if (first != 0)
            ystart += (7 - first);

        for (int y = ystart; y <= 400; y += 7)
        {
            ++result;
        }
    }
    cout << result;
    return 0;
}