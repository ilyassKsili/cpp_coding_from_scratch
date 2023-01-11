#include <iostream>
#include <cmath>
#include <string>
using namespace std;


enum engendor{female,male};
enum enIsmarried{single,married,devorsed};
enum encolor {black,white,blue,yellow,red,orange,green,pink};
enum enlongauges {english,french,arabic,spanish,italy,japan,german};

struct stAddress
{
	string street;
	string build_no;
	string box;
};
struct stinformation
{
	string email;
	string phone;
	stAddress address;
};

struct person 
{
	string fullname;
	short age;
	float monthly_salary;
	stinformation informatin;
	encolor color;
	enIsmarried ismarried;
	engendor gendor;
	enlongauges longauges;
};

int main()
{
	person person1;

	cout << "entre your fullname ?\n";
	getline(cin, person1.fullname);
	cout << "entre you age ?\n";
	cin >> person1.age;
	cout << "entre your Monthlysalary ?\n";
	cin >> person1.monthly_salary;
	cout << "street : \n";
	getline(cin, person1.informatin.address.build_no);
	cout << "box : \n";
	getline(cin, person1.informatin.address.box);
	cout << "entre your email :\n";
	getline(cin, person1.informatin.email);
	cout << "entre your phone :\n";
	cin >> person1.informatin.phone;
	


	cout << "****************************************************\n\n\n";

	cout << "fullname : " << person1.fullname << endl;
	cout << "age : " << person1.age << endl;
	cout << "monthly salary : " << person1.monthly_salary << endl;
	cout << "yearly salary : " << person1.monthly_salary * 12 << endl;
	cout << "address : " << person1.informatin.address.street + " " + person1.informatin.address.build_no + " " + person1.informatin.address.box << endl;
	cout << "email : " << person1.informatin.email << endl;
	cout << "phone : " << person1.informatin.phone << endl;
	
	cout << "****************************************************\n\n";











}