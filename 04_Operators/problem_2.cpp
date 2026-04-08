#include<iostream>
using namespace std;

int main() {

	int a = 1, b = 1, c;

	cout<<(c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c,
		   c = a+b, a = b, b = 8) <<endl;

	return 0;
}

// The output is:
// 8

