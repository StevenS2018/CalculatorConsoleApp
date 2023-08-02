// CPPExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using namespace std;
using std::cin;

double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);


int main()
{
	double num1, num2;
	char op;

	cin >> num1 >> op >> num2;

	double addition = add(num1, num2);
	double subtraction = subtract(num1, num2);
	double multiplication = multiply(num1, num2);
	double division = divide(num1, num2);
	switch(op)
	{
	   case '+':
		   cout << addition;
		   break;

	   case '-' :
		   cout << subtraction;
		   break;

	   case '*':
		   cout << multiplication;
		   break;

	       case '/': 
		   cout << division;
		   break;
	}
}
double add(double num1, double num2) 
{
	return num1 + num2;
}
double subtract(double num1, double num2) 
{
	return num1 - num2;
}
double multiply(double num1, double num2)
{
	return num1 * num2;
}
double divide(double num1, double num2)
{
	if(int(num1) % int(num2) == 0)
	{
		return num1 / num2;
	}
	else 
	{
		return num1 / num2;

	}
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
