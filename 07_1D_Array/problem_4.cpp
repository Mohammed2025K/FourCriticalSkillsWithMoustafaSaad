// Read an Integer N, then read N <= 200 integers. Find the value that repeated
// the most number of times.
// ○ Each integer is 0 <= integer <= 150

// my answer
// #include <iostream>
// using namespace std;
// int main()
// {
//     // read size of array
//     int size;
//     do
//     {
//         cout << "Enter the size of array: ";
//         cin >> size;

//     } while (!(size > 0 && size <= 200));

//     // build the array
//     int numbers[size];
//     for (int i = 0; i < size; ++i)
//     {
//         do
//         {
//             cout << "Enter number " << i + 1 << " :";
//             cin >> numbers[i];

//         } while (!(0 <= numbers[i] && numbers[i] <= 150));
//     }

//     int repeat[size];
//     for (int i = 0; i < size; ++i)
//     {
//         repeat[i] = 0;
//         int num = numbers[i];
//         for (int j = 0; j < size; ++j)
//         {
//             if (num == numbers[j])
//             {
//                 ++repeat[i];
//             }
//         }
//     }

//     int max = repeat[0];
//     for (int i = 0; i < size; ++i)
//     {
//         if (max < numbers[i])
//         {
//             max = numbers[i];
//         }
//     }

//     cout << "New Array: \n";
//     for (int i = 0; i < size; ++i)
//     {
//         cout << repeat[i];
//     }
//     cout << "\nmax: " << max;

//     return 0;
// }

// techer way 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, numbers[200];
//     cin >> n;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> numbers[i];
//     }

//     int max_value, max_repeat = -1;

//     for (int i = 0; i < n; ++i)
//     {
//         int repeat = 0;
//         for (int j = 0; j < n; ++j)
//         {
//             repeat += (numbers[i] == numbers[j]);
//         }

//         if (max_repeat == -1 || max_repeat < repeat)
//         {
//             max_repeat = repeat, max_value = numbers[i];
//         }
//     }

//     cout << max_value << " repeated " << max_repeat << " times";

//     return 0;
// }

// techer way 2
#include <iostream>
using namespace std;
int main()
{
    int n, numbers[200], frequency[10 + 1] = {0};

    cin >> n;
    // frequency array
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
        frequency[numbers[i]]++;
    }

    int max_pos = -1;
    for (int i = 0; i < 11; ++i)
    {
        if (max_pos == -1 || frequency[max_pos] < frequency[i])
        {
            max_pos = i;
        }
    }
    cout << max_pos << " repeated " << frequency[max_pos] << " times";

    return 0;
}