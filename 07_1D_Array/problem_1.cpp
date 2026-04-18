// ● Read an Integer N ( < 200), then read N (distinct) integers. Find the maximum
// and 2nd maximum values
// ● Input: 5 10 20 3 30 7 ⇒ Output 30 20

// way 1

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
//     int max1, max2;
//     if (numbers[0] >= numbers[1])
//     {
//         max1 = numbers[0], max2 = numbers[1];
//     }
//     else
//     {
//         max1 = numbers[1], max2 = numbers[0];
//     }

//     for (int i = 2; i < n; ++i)
//     {
//         if (max1 <= numbers[i])
//             max2 = max1, max1 = numbers[i];
//         else if (max2 < numbers[i])
//             max2 = numbers[i];
//     }

//     cout << max1 << " " << max2;

//     return 0;
// }

// way 2

#include <iostream>
using namespace std;

int main()
{
    int size;
    do
    {
        cout << "Enter the size of array: ";
        cin >> size;

    } while (!(size > 0 && size <= 200));

    int arr[size];
    cout << "Enter the value of index " << 0 << " : ";
    cin >> arr[0];
    cout << "Enter the value of index " << 1 << " : ";
    cin >> arr[1];

    int max1, max2;
    if (arr[0] >= arr[1])
    {
        max1 = arr[0], max2 = arr[1];
    }
    else
    {
        max1 = arr[1], max2 = arr[0];
    }

    for (int i = 2; i < size; ++i)
    {
        cout << "Enter the value of index: " << i << " : ";
        cin >> arr[i];

        if (max1 <= arr[i])
            max2 = max1, max1 = arr[i];
        else if (max2 < arr[i])
            max2 = arr[i];
    }

    cout << max1 << " " << max2;

    return 0;
}


