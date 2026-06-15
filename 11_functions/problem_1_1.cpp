// Write a function that reads 6 numbers and compute their maximum. Create
// the following functions
// ○ max(int a, int b, int c)
// ○ max(int a, int b, int c, int d)
// ○ max(int a, int b, int c, int d, int e)
// ○ max(int a, int b, int c, int d, int e, int f)
// ● How can
// ○ max(int a, int b, int c, int d) utilize max(int a, int b, int c) ? and so on
#include <iostream>
using namespace std;
int mac(int a, int b, int, int c)
{
    return max(a, max(b, c));
}
int max(int a, int b, int c, int d)
{
    return max(a, max(b, max(c, d)));
}
int max(int a, int b, int c, int d, int e)
{
    return max(a, max(b, max(c, max(d, e))));
}

int max(int a, int b, int c, int d, int e, int f)
{
    return max(a, max(b, max(c, max(d, max(e, f)))));
}

int main()
{
    cout << max(10, 2, 50, 4);
    // max function take only 2 arguments, so we use it multiple times to get finel result
    return 0;
}