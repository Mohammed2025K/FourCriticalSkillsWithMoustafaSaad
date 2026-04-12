//  Read an integer N : print all numbers that satisfy the following property
// ○ Either number is divisible by 8
// ○ Or divisible by both 4 and 3
// ● Input: 100
// ● Output: 0 8 12 16 24 32 36 40 48 56 60 64 72 80 84 88 96 

#include <iostream>
using namespace std;

int main()
{
    int user_input;
    cin >> user_input;
    int counter = 0;


        while (counter <= user_input)
        {
            if (counter % 8 == 0 || (counter % 4 == 0 && counter % 3 == 0))
                cout << counter << " ";
            counter++;
        }

    return 0;
}