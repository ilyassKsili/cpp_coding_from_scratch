#include<iostream>
#include<cmath>
using namespace std;


struct roedmap
{
	string specailty;
	string types;//theoretical or practical
	string level;// beginner or intermediate or advanced
	string type_of_lesson;// en ligen or 
};
struct user
{
	string fullname;
	short age;
	char gender;
	roedmap course_of_stady;
};
int main()
{
	user students;
	cout << "entre you fullname\tyour age\tyour gender ?\n";
	cin >> students.fullname;
	cin >> students.age;
	cin >> students.gender;

	cout << "entre your specality\tyour level\tand what types of lesson do you want?\n";
	cin >> students.course_of_stady.specailty;
	cin >> students.course_of_stady.level;
	cin >> students.course_of_stady.type_of_lesson;

	cout << "*****************************************************\n\n\n";
	cout << "fullname : " << students.fullname << endl;
	cout << "age : " << students.age << endl;
	cout << "gender : " << students.gender << endl;
	cout << "specality : " << students.course_of_stady.specailty << endl;
	cout << "level : " << students.course_of_stady.level << endl;
	cout << "types of lesson :" << students.course_of_stady.type_of_lesson << endl;
	cout << "*****************************************************\n\n\n";
	return 0;


}