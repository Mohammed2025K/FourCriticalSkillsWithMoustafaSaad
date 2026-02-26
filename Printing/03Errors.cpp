#include <iostream> // first popular error is to forget include iostream
using namespace std;

// cout << "I am mohammed"; ----> don't print out of the function
int main() // main NOT Main or MAIN
{
    cout << "Mohammed\n"; // don't forget ;

    // biggest number of integer is 2147483647 and lowest number is -2147483648 ;
    int high = 2147483647;
    int low = -2147483648;
    high++; // overflow Error (undefined behavior)
    low--;  // underflow Error (undefined behavior)
    cout << high << "\n";
    cout << low << "\n";

    // cout << 10 / 0 << "\n"; // warning division by zero
    cout << 'hello';
    return 0; // don't forget return
}