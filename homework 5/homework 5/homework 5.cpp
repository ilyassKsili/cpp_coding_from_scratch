#include <iostream>
using namespace std;

int main()
{

	cout << "(7=7) and (7>5) ?" << ((7 == 7) && (7 > 5)) << endl;

	cout << "(5>7 and 7=7) or (1 or 0)" << ((5 > 7 && 7 == 7) || (1 || 0)) << endl;

	cout << "((5>7 and not (7<=8)) and ( 8<1 or 3>=4)) or true ? " << (((5 > 7 & !(7 <= 8)) && (8 < 1 || 3 >= 4)) || true )<< endl;

	return 0;





}