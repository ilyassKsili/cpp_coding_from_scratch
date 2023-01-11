#include <iostream>
#include <string>
using namespace std;

double area(float a, float b)
{
	float PI = 3.14;
	return PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
}
int main()
{
	float a, b;
	cout << "entre a and b ?\n";
	cin >> a;
	cin >> b;
	cout << "the area is : " << area(a, b) << endl;
	return 0;

}