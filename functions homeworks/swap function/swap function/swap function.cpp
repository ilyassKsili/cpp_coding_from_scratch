#include <iostream>
#include <string>
using namespace std;

int m(int num1, int num2)
{
	return num1 - num2;
}
void swap(int &num1, int &num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
int main()
{
	int num1, num2;
	cout << "emtre num1 and num2 ?\n";
	cin >> num1;
	cin >> num2;

	cout << "num1-num2 = " << m(num1, num2) << endl;
	
	swap(num1, num2);

	cout << "num2-num1 = "<< m(num1, num2) << endl;

	return 0;
}
