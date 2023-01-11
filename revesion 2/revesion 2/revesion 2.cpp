#include<iostream>
#include<string>
using namespace std;


int main()
{
    int num1;
    float num2 = 124.456;

    num1 = num2;

        cout << num1 << endl;

        string str1 = to_string(num1);

        cout << str1 << endl;

        cout << str1.length() << endl;

        cout << str1[1] << endl;

        string fullname;

        cout << "entre your fullname\n";
        // reading string with spaces
        getline(cin, fullname);
        cout << "your fullname is : " << fullname << endl;









}