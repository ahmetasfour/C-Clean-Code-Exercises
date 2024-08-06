// Conditional Statment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//void homework1() {
//
//	int age;
//	char HasDriveLecanse;
//	cout << "enter your age :\n";
//	cin >> age;
//	cout << "do you have a drive licanse Y/N ?:\n";
//	cin >> HasDriveLecanse;
//
//	if (age > 21 && HasDriveLecanse == 'y' || HasDriveLecanse == 'Y')
//	{
//		cout << "Hired";
//	}
//
//	else
//	{
//		cout << "Rejected";
//	}
//
//}

struct Stİnfo {

	int Age;
	bool HasDriveLicanse;

};
Stİnfo Readİnfo() {
	Stİnfo İnfo;

	cout << "plase enter your age" << endl;
	cin >> İnfo.Age;

	cout << "Do you Have Driver Licanse" << endl;
	cin >> İnfo.HasDriveLicanse;

	return İnfo;

}
bool İsAcceped(Stİnfo İnfo) {
	return(İnfo.Age>21 &&İnfo.HasDriveLicanse);
}
void PrintResult(Stİnfo İnfo) {

	if (İsAcceped(İnfo)) {
		cout << "\nHired ";

	}
	else
	{
		cout << "\nRejicted";
	}
}

int main()
{
	PrintResult(Readİnfo());
	return 0;

}