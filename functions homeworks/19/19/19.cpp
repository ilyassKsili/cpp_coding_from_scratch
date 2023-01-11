#include <iostream>
#include <string>
using namespace std;

float area(float diameter)
{
	float PI = 3.14;
	return (PI * pow(diameter, 2)) / 4;

}
int main()
{
	float diameter;
	cout << "entre the diameter ?\n";
	cin >> diameter;
	cout << "the area is :" << area(diameter) << endl;

	return 0;

}