#include <iostream>
using namespace std;

int main()
{
	int myAge = 25;
	cout << "I am " << myAge << "years old"<< endl;
	myAge = 30;
	cout << "after 5 years i will be in " << myAge << " years old\n";

	
	float mynum = 12.34;
	char mylettre = '\'a\'';
	double mydoublenum = 12.123456;
	string mytext = "i love programming";
	bool myboolean = false;

	cout << mynum<<"\n";
	cout << mylettre<< endl;
	cout << mydoublenum<< endl;
	cout << mytext<< endl;
	cout << myboolean<< endl;

	int x = 15;
	int y = 20;
	//int z = x + y ;
	cout << x+y << endl;
	// other way
	int u = 10, v = 15, w = u + v ;
	cout << w << endl ;
	
// character
	char char1 = 'I', char2 = 'L', char3 = 'Y', char4 = 'A', char5 = 'S';
	cout << char1 << char2 << char3 << char4 << char5 << " reversed is " << char5 << char4 << char3 << char2 << char1<< endl;
// constants= read only variables 
	const int muniteperseconde = 60;
	const float PI = 3.14;
	 
	cout << "the munite is " << muniteperseconde << " seconde" << endl;

	





	return 0;
}