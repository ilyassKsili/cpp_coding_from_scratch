#include <iostream>
#include <string>
using namespace std;

double rectangle_area(float diagonale, float A)
{
	return A * sqrt(pow(diagonale, 2) - pow(A, 2));


}
int main()
{
	float diagonale, A;

	cout << "entre the diagonale and A\n";
	cin >> diagonale;
	cin >> A;

	cout << "the area is " << rectangle_area(diagonale,A) <<"m^2" << endl;

	return 0;

}