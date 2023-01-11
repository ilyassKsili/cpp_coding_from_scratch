#include <iostream>
#include <string>
using namespace std;


void mySomProcedures()
{
	int num1, num2, sum;
	cout << "entre numbre 1 ?\n";
	cin >> num1;
	cout << "entre numbre 2 ?\n";
	cin >> num2;

	cout << "*************************\n";
	cout << (sum = num1 + num2) << "\n";

}

int mySomFunction()
{
	int num3, num4, sum1;
	cout << "entre numbre 1 ?\n";
	cin >> num3;
	cout << "entre numbre 2 ?\n";
	cin >> num4;
	
	cout << "*************************\n";
	return (sum1 = num3 + num4);

}

int main()
{
	mySomProcedures();
	cout << "*************************\n";
	
	cout << mySomFunction() << endl;

	return 0;


}