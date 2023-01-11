#include<iostream>
using namespace std;

struct user
{
	string fullname;
	short age;
	string country;
};
enum gender {male,female};
enum color {red , yellow ,blue ,white ,black ,orange,green};

int main()
{
	user person;
	gender myGender;
	color myColor;


	myColor = color::black;
	myGender = gender::male;
	


	cout << "entre your fullname\tyour age\tyour country ?\n";
	cin >> person.fullname;
	cin >> person.age;
	cin >> person.country;

	cout << " gender : " << myGender << endl;
	cout << "color : " << myColor << endl;
	return 0;



}