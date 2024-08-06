#include <iostream>
#include <string>
using namespace std;

struct strinfo {
	string FirstName , LastName ,phone;
	int age;
};

void readinfo(strinfo &info) {
	cout << "enter your first name: \n";
	cin >> info.FirstName;

	cout << "enter your last name: \n";
	cin >> info.LastName;

	cout << "enter your phone: \n";
	cin >> info.phone;

	cout << "enter your age: \n";
	cin >> info.age;

	

}
void writeinfo(strinfo info) {
	cout << "**************************************************\n";

	cout << "your first name is:" << info.FirstName << "\n";

	cout << "your last name is:" << info.LastName << "\n";

	cout << "your age is:" << info.age << "Years \n";

	cout << "your phone number is:" << info.phone << "\n";
	cout << "**************************************************\n";


}
void readpersoninfo(strinfo personel[2]) {
	readinfo(personel[0]);
	readinfo(personel[1]);
}
void writepersoninfo(strinfo personel[2]) {
	writeinfo(personel[0]);
	writeinfo(personel[1]);
}
int main()
{
	strinfo personel[2];
	readpersoninfo(personel);
	writepersoninfo(personel);


}
