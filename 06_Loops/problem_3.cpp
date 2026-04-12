// Read a C++ integer and count its
// number of digits

#include <iostream>
using namespace std;

int main()
{
    int num, cnt = 0;

    cin >> num;
    int tmp_num = num;

    if (num == 0)
    {
        cnt = 1;
    }
    else if (num == -2147483648)
    {
        cnt = 10;
    }
    else
    {
        if (num < 0)
            num = -(num);
        while (num > 0)
        {
            num /= 10;
            cnt++;
        }
    }

    cout << "number of digits of " << tmp_num << " is " << cnt;

    return 0;
}