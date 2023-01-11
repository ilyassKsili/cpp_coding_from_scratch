#include <iostream>;
using namespace std;

int main()
{
	float PI = 3.14;
	float inscribed;

	cout << "entre the cercle inscribed ?\n";
	cin >> inscribed;

	float area = PI * inscribed * inscribed / 4;

	cout << "the cercle area is " << area << " (mm^2)\n";
	return 0;




}
