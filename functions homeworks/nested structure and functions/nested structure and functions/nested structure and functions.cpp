#include <iostream>
#include <string>
using namespace std;

struct stinfo
{
	string lastname;
	string fristname;
	int age;
	string phone;
};

void read(stinfo &info)
{
	cout << "entre your lastname ?\n";
	cin >> info.lastname;
	cout << "entre your fristname ?\n";
	cin >> info.fristname;
	cout << "entre your age ?\n";
	cin >> info.age;
	cout << "entre your numberphone ?\n";
	cin >> info.phone;
}
void print(stinfo info)
{
	cout << "***********************************************\n";
	cout << "FullName: " << info.fristname << " " << info.lastname << endl;
	cout << "Age: " << info.age << endl;
	cout << "Phone: " << info.phone << endl;
	cout << "***********************************************\n";
}

int main()
{
	stinfo person1;
	read(person1);
	print(person1);
	return 0;
}