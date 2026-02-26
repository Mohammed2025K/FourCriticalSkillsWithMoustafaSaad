#include <iostream>
using namespace std;

int main()
{

    // This cout can print integers, floating-point numbers, strings, or a mix of them.
    cout << 123 << " is number\n";
    cout << "123" << " is not number\n\n";

    cout << 15.7 << "\n";
    cout << -12.52 << "\n\n";

    cout << 43211234 << "\n";
    cout << 4321 << 1234 << "\n\n";

    cout << "My luck number is: " << 17 << "\n\n";
    cout << "-----------------------------------------------------\n\n";
    
    
    // you can make math operators on numbers
    cout << 1 + 2 << "\n";
    cout << "1 + 2 = " << 1 + 2 << "\n\n";

    cout << "7 * 2 = " << 7 * 2 << "\n\n";

    cout << "7 / 2 = " << 7 / 2 << "\n\n";

    cout << "7.0 / 2.0 = " << 7.0 / 2.0 << "\n";
    cout << "7.0 / 2 = " << 7.0 / 2 << "\n\n";

    cout << 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 << "\n";
    // cout << 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 << "\n"; ----> Overflow

    // return 0 tells compiler we are done, lines after that well be ignored.
    return 0;
}