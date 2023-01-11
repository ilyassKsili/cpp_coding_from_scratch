#include <iostream>
#include <string>
using namespace std;

float pow_of_2(float number)
{
	return number * number;
}
float pow_of_3(float number)
{
	return number * number * number;
}
float pow_of_4(float number)
{
	return  number * number * number * number;
}

int main()
{
	float number;
	cout << "entre the number ?\n";
	cin >> number;
	cout << "the Number^2 :" << pow_of_2(number) << endl;
	cout << "the Number^3 :" << pow_of_3(number) << endl;
	cout << "the Number^4 :" << pow_of_4(number) << endl;
	return 0;


}
