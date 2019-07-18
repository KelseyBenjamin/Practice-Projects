/*Write a program in C++ to find the area of any triangle using Heron's Formula.
Heron's Formula: 2 parts~ 1. s= (a+b+c)/2   2. A= sqrt(s(s-a)(s-b)(s-c))*/


//include statements
#include <iostream>
#include <cmath>
using namespace std;

//main 
int main()
{
	//variable declaration
	float s1, s2, s3, S, A;
	//ask for input
	cout << "Enter side 1, side 2, side 3 of the triangle" <<endl;
	cout << "Side 1: ";
	cin >> s1;
	cout << "Side 2: ";
	cin >> s2;
	cout << "Side 3: ";
	cin >> s3;

	//calculations
	S = (s1 + s2 + s3) / 2;
	A = sqrt(S*(S - s1)*(S - s2)*(S - s3));

	//Display answer
	cout << "The area of the triangle is: " << A;
}


