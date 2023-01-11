#include <iostream>
using namespace std;



struct life_partner_information
{
	string fullname;
	short age;
	string occupation;
};
struct personal_information
{
	string fullname;
	short age;
	string city, country;
	int monthlysalary;
	life_partner_information lifeInformation;
	char gender;
	bool ismarried;
	
};




int main()
{
	personal_information person1;

		
		cout << "entre your fullname ?\n";
		cin >> person1.lifeInformation.fullname;
		cout << "entre your age ?\n";
		cin >> person1.age;
		cout << "entre your country and your city ?\n";
		cin >> person1.country;
		cin >> person1.city;
		cout << "entre your monthly salary ?\n";
		cin >> person1.monthlysalary;
		cout << "entre your gender ?\n";
		cin >> person1.gender;
		cout << "are you married ?\n";
		cin >> person1.ismarried;
		cout << " if yes , what is him/his fullname  ?\n";
		cin >> person1.lifeInformation.fullname;
		cout << "what is him/his age ?\n";
		cin >> person1.lifeInformation.age;
		cout << "what is him/his occupation ?\n";
		cin >> person1.lifeInformation.occupation;


		cout << "*****************************************\n";
		cout << "fullname : " << person1.fullname << endl;
		cout << "age : " << person1.age << endl;
		cout << "country : " << person1.country << endl;
		cout << "city : " << person1.city << endl;
		cout << "monthly salary : " << person1.monthlysalary << endl;
		cout << "yearly saraly : " << person1.monthlysalary * 12 << endl;
		cout << "gender : " << person1.gender << endl;
		cout << "is married : " << person1.ismarried;
		cout << "partner's fullname : " << person1.lifeInformation.fullname << endl;
		cout << "partner's age  " << person1.lifeInformation.age << endl;
		cout << "partner's occupation : " << person1.lifeInformation.occupation << endl;
		cout << "*****************************************\n";

		return 0;
	


}