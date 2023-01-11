#include <iostream>
#include <string>
using namespace std;

double area(float Rayon)
{
	float PI = 3.14;
	return PI * pow(Rayon,2);

}

int main()
{
	float Rayon;
	cout << "entre the rayon ?\n";
	cin >> Rayon;

	cout << "the area is " << area(Rayon) << " m^2" << endl;
	return 0;
}