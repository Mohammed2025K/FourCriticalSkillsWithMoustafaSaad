// Homework 4: Is Palindrome Array
// ● Read N, then N integers for an Array. Call a function with the array to check if
// the array is palindrome or note
// ○ We already coded it before
// ○ Just copy code and rearrange to call function with array

#include <iostream>
using namespace std;

int read_array(int arr[])
{
    int len;
    cin >> len;
    for (int i = 0; i < len; ++i)
    {
        cin >> arr[i];
    }
    return len;
}

bool is_palindrom(int arr[], int n)
{
    for (int i = 0; i < n-1; ++i)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[100];
    int len = read_array(arr);
    cout << is_palindrom(arr, len);
    return 0;
}