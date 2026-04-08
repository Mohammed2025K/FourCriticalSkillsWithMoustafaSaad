// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 0, b = 0;
//     cin >> a >> b;

//     double temp;
//     temp = (a % b);
//     cout << temp / b;

//     return 0;
// }


#include<iostream>
using namespace std;

int main() {

	double a, b;
	cin>>a>>b;

	double result = a/b;

	cout<<result - (int)result;

	return 0;
}


