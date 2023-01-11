#include <iostream>
using namespace std;

int main()
{
	string name, country;
	int age;
	float Monthlysalary;
	char gender;
	bool MARRIED;
	int numbre1, numbre2, numbre3;
	int yourAge;

	cout << "please entre your name ?\n";
	cout << "\a";
	cin >> name;

	cout << "please entre your age ?\n";
	cout << "\a";
	cin >> age;

	cout << "please entre your country ?\n";
	cout << "\a";
	cin >> country;

	cout << "what your monthly salary ?\n";
	cout << "\a";
	cin >> Monthlysalary;

	cout << "please entre your gender ?\n";
	cout << "\a";
	cin >> gender;

	cout << " are you married ?\n";
	cout << "\a";
	cin >> MARRIED;


	cout << "****************************************************" << endl;
	cout << "Name : " << name << endl;
	cout << "Age : " << age << "years" << endl;
	cout << "Monthlysalary : " << Monthlysalary << "MAD" << endl;
	cout << "Yearlysalary : " << Monthlysalary * 12 << "MAD" << endl;
	cout << "Gender : " << gender << endl;
	cout << "Married : " << MARRIED << endl;
	cout << "****************************************************" << endl;


	cout << "--------------------------------------------------------------------------\n";




	cout << "entre the frist number ?\n";
	cin >> numbre1;
	cout << "entre the seconde numbre ?\n";
	cin >> numbre2;
	cout << "entre the thirt numbre ?" << endl;
	cin >> numbre3;

	cout << "sum of tree numbre are " << numbre1 + numbre2 + numbre3 << endl;

	cout << "--------------------------------------------------------------------------\n";


	cout << "please entre your age ?\n";
	cin >> yourAge;

	cout << " after 5 years you will be in " << yourAge + 5 << " years old." << endl;




	return 0;




}


