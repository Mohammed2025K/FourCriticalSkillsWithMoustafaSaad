// ● Read an Integer N, then read N <= 200 integers.
// ○ In-place: Change the current array, don’t use 2 arrays
// ● Simple idea: Iterate from the begin and end in same time
// ○ Swap the 2 positions
// ○ Do this tell the middle only

// #include <iostream>
// using namespace std;
// int main()
// {
//     int size;
//     do
//     {
//         cout << "Enter the size of array: ";
//         cin >> size;

//     } while (!(size > 0 && size <= 200));

//     int numbers[size];
//     for (int i = 0; i < size; ++i)
//     {
//         cin >> numbers[i];
//     }

//     for (int i = 0; i < size / 2; ++i)
//     {
//         int tmp = numbers[i];
//         numbers[i] = numbers[size - i - 1];
//         numbers[size - i - 1] = tmp;
//     }

//     for (int i = 0; i < size; ++i)
//     {
//         cout << numbers[i] << " ";
//     }

//     return 0;
// }

// Way 2
#include <iostream>
using namespace std;
int main()
{

    int size;
    do
    {
        cout << "size: ";
        cin >> size;

    } while (!(size <= 200));

    int numbers[size];
    int tmp;

    for (int i = 0; i < size; ++i)
    {
        cin >> numbers[size - i - 1];
    }

    for (int i = 0; i < size; ++i)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}