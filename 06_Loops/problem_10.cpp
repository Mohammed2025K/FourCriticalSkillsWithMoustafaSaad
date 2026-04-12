// Print diamond
// ● Read an integer N, then print diamond of 2N rows as below

#include <iostream>
using namespace std;

int main()
{
    int user_input;
    cin >> user_input;

    // Upper tringel
    int rows = 1;
    int spaces;
    int stars;
    while (rows < user_input)
    {
        spaces = user_input - rows;
        while (spaces > 0)
        {
            cout << " ";
            --spaces;
        }

        stars = (rows * 2) - 1;
        while (stars > 0)
        {
            cout << "*";
            --stars;
        }
        cout << "\n", ++rows;
    }

    // lower tringel
    rows = 1;
    while (rows <= user_input)
    {
        spaces = rows - 1;
        while (spaces > 0)
        {
            cout << " ";
            --spaces;
        }

        stars = (2 * user_input) - (2 * rows - 1);
        while (stars > 0)
        {
            cout << "*";
            --stars;
        }
        cout << "\n";
        ++rows;
    }

    return 0;
}
