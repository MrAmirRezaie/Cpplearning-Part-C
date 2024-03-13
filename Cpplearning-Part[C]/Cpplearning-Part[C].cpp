#include <iostream>
using namespace std;


//Part[C]

//Write a program that receives two numbers from the user and then calculates their sum and displays them in the output.

int main()
{
	double num1,
		num2;

	cout << "Enter your first number : ";
	cin >> num1;

	cout << "Enter your second number : ";
	cin >> num2;

	cout << "The sum of the two numbers entered by you is equal to : " << num1 + num2 << endl;

	return 0;
}