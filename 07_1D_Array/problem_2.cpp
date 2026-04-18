// Read an Integer N, then read N <= 200 (distinct) integers. Find a pair of
// numbers (e.g. 2 different indices) whose sum is maximum

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

    cout << max1 + max2;

    return 0;
}
