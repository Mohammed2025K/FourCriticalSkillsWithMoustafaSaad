// ● Read an integer N (1 <= 30): Print the first N numbers that are
// ○ multiple of 3 but not multiple of 4
// ● Input: 11
// ● Output: 3 6 9 15 18 21 27 30 33 39 42

#include <iostream>
using namespace std;

int main()
{
    int user_input;
    cin >> user_input;

    int counter = 0;
    int numbers_match = 0;
    while (numbers_match < user_input)
    {
        if (counter % 3 == 0 && counter % 4 != 0)
        {
            cout << counter << ' ';
            numbers_match++;
        }
        counter++;
    }
    return 0;
}