// ● Read integer N, then read N strings.
// ○ Print only the strings (of 2 letters).
// ○ These 2 letters must be letter ‘N’ and letter ‘O’
// ■ Regardless of lower or upper case
// ■ Regardless of the 2 letters order
// ■ E.g. print “No”, “ON”, “no” but ignore e.g. “YEs”, “Noooo”
// ■ That is: a word of 2 letters only N and O

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N > 0)
    {
        string word;
        cin >> word;
        if (word == "NO" || word == "No" || word == "nO" || word == "no" || word == "ON" || word == "On" || word == "oN" || word == "on")
        {
            cout << word << " ";
        }
        --N;
    }

    return 0;
}