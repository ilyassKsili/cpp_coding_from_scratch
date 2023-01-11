#include <iostream>
using namespace std;

int main()
{

	short diametre;
	float PI = 3.14;
	cout << " entre the diametre (mm) ?\n";
	cin >> diametre;
 
	float area = (PI * diametre * diametre) / 4;

	cout << "the cercle area is " << area << "mm^2\n";


	return 0;
}