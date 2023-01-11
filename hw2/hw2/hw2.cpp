#include <iostream>
using namespace std;
int main()
{
	int numbre1, numbre2, numbre3;
	float multiply = numbre1 * numbre2 * numbre3;


	cout << "entre the frist number ?\n";
	cin >> numbre1;
	cout << "entre the seconde numbre ?\n";
	cin >> numbre2;
	cout << "entre the thirt numbre ?" << endl;
	cin >> numbre3;

	cout << "the multiplication of tree numbre are " << multiply << endl;

	multiply = multiply * multiply;
	cout << multiply;


	return 0;

}