/*Write a program in C++ to convert temperature between Celsius and Fahrenheit.
Conversion: C-->F = Multiply by 9, then divide by 5, then add 32
F--->C = Deduct 32, then multiply by 5, then divide by 9*/

//include statements
#include <iostream>
#include <cmath>
using namespace std;

//Main
int main()
{
	//variable declarations
	float Gtemp, A;
	char measurement;
	//ask for data
	cout << "Enter C for celsius or an F for fahrenheit then hit the space bar and enter the temperature" << endl;
	cin >> measurement >> Gtemp;
	//calculations
	if ((measurement == 'C') || (measurement == 'c'))
	{
		A = ((Gtemp * 9) / 5) + 32;
		cout << "The temp is: " << A << " F" << endl;
	}
	else if ((measurement == 'F') || (measurement == 'f'))
	{
		A = ((Gtemp - 32) * 5) / 9;
		cout << "The temp is: " << A << " C" << endl;
	}

	system("pause");
	return 0;
}