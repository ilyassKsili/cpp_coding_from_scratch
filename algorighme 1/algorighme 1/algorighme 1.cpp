#include <iostream>
using namespace std;

int main()
{
	string name, city, country;
	short age;
	float monthlysalary, yearlyrest;


	cout << "entre your fullname?\n";
	cin >> name;
	cout << "entre your age?\n";
	cin >> age;
	cout << "entre your city?\n";
	cin >> city;
	cout << "entre your country?\n";
	cin >> country;
	cout << "entre your monthlysalary?\n";
	cin >> monthlysalary;

	cout << "your fullname is : " << name << "\n";
	cout << "your age is : " << age << " years old\n";
	cout << "you live in " << city << "\n";
	cout << "your country is " << country << "\n";
	cout << "your monthly salary is " << monthlysalary << " \"mad\" and your deductions is " << monthlysalary*0.4 << " \"mad\" so the rest in a year is " << monthlysalary * 0.6 * 12 << " \"mad\"\n";


	return 0;















}