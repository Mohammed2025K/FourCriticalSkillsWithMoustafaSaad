// ● Input: Read an integer N followed by a single character
// ● Output: Print the character N times as below
// ● Input ⇒ Output
// ○ 5 Y ⇒ YYYYY
// ○ 3 # ⇒ ###

#include <iostream>
using namespace std;

int main()
{
    int num;
    char character;
    cin >> num >> character;

    while (num > 0)
    {
        cout << character;
        num--;
    }
    return 0;
}