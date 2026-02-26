#include <iostream>
#include <windows.h> // for using sleep function
#include <chrono> // for calculate total time 
/* 
include is a (preprocessor directive)
iostream is Input/Output Stream, a library containing tools for dealing with the monitor
iostream includes (cout, cin, endl)
< > tells the compiler to find iostream in the language standard files, not in your files
*/

using namespace std;
using namespace chrono;
/*
namespace is the "family name" for a group of tools
the standard tools of C++ are in 'std'
this line means if the compiler finds a tool, it automatically searches in the 'std' family
good for small projects, but not recommended for large ones
*/
int main()
{   
    /*
    cout = character output
    \n is just an escape sequence for endding line and move to new line
    endl doing the same thing and flush the buffer
    */

    // try printing----------------------------------------------------------------------------------------
    /*
    cout << "I am mohammed\n";
    cout << "Hello" << endl << "world!";
    */
    

    // try the diffrent between endl and \n using windows.h----------------------------------------------------------------------------------------
    /*
    cout << "Loading...\n";
    Sleep(3000);

    cout << "Loading..." << endl;
    Sleep(3000);
    */
    

    //try the diffrent between endl and \n using chrono----------------------------------------------------------------------------------------
    auto start = high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++)
    {
        cout << i << endl;
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Time taken: " << duration.count() << " ms\n";

    // \n takes 39019 ms
    // endl takes 49224 ms
    return 0;
}