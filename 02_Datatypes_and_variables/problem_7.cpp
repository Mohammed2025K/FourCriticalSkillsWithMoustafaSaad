/*
Homework 8: Print Me


Write a program that reads 2 integers A, B
	B is either -1 or 1
If -1, print 2*A+1
If 1, print A*A

*/

#include <iostream>
using namespace std;

int main()
{

	int A, B;
	cout << "Enter A: ";
	cin >> A;
	cout << "Enter B: ";
	cin >> B;

	int is_neg = 2 * A + 1;
	int is_one = A * A;

	int equ_one = (B + 1) / 2;
	int equ_neg = 1 - equ_one;

	cout << is_one * equ_one + is_neg * equ_neg;

	return 0;
}
