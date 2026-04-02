#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 1;

    a = ++b;

    ++b = a;

    a = b++;

    return 0;
}
