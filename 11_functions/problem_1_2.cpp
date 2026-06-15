// ● Develop a function that do reverse for the string. Function is:
// ● string reverse_str(const string & str);
// ○ Don’t try to change str content or you will get compilation error
#include <iostream>
using namespace std;

string reverse_str(const string &str)
{
    string ret = str;
    for (int i = 0; i < (int)ret.size(); ++i)
    {
        ret[i] = str[(int)str.size() - i];
    }
    return ret;
}
int main()
{
    cout << reverse_str("mohammed");
    return 0;
}