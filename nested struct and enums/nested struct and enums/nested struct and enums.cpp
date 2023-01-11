#include <iostream>
using namespace std;

enum encolor{balck,white,red,blue};
enum engendor{male,female};
enum enmaritalstatus{single,married};

struct staddress
{
	string street_name;
	string builling_no;
	int zipcode;
};
struct stcontact_info
{
	string phone;
	string email;
	staddress address;
};
struct stperson
{
	string fristname;
	string lastname;
	stcontact_info contact_info;
	encolor fvouratecolor;
	engendor gendor;
	enmaritalstatus married_status;
};
int main()
{

	stperson person;

	person.fristname = "ilyass ";
	person.lastname = "el ksili";
	person.gendor = engendor::male;
	person.contact_info.address.street_name = "el qods ";
	person.contact_info.address.builling_no = "bloc 2";
	person.contact_info.address.zipcode = 3500;
	person.contact_info.email = "ilyass.elksili@gmail.com";
	person.contact_info.phone = "0682122716";
	person.fvouratecolor = encolor::blue;
	person.married_status = enmaritalstatus::single;


	cout << person.fristname << " " << person.lastname << endl;



	return 0;








}
