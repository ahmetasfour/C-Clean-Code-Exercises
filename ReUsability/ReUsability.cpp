// ReUsability.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

struct Strİnfo
{
	int age, salary;
	string name ,city;
	char marrid;
	char gender;
	string work;
};

void Readİnfo(Strİnfo &İnfo) {

	cout << "enter your name: \n";
	cin >> İnfo.name;
	

	cout << "enter your city: \n";
	cin >> İnfo.city;

	cout << "enter your age: \n";
	cin >> İnfo.age;

	cout << "enter your salary: \n";
	cin >> İnfo.salary;

	cout << "enter your status (marrid/single): \n";
	cin.ignore(1, '\n');
	cin >> İnfo.marrid;

	cout << "enter your gander: \n";
	cin >> İnfo.gender;

	cout << "enter your gander: \n";
	cin >> İnfo.work;
}

void Printİnfo(Strİnfo İnfo) {

	cout << "your name is : "<< İnfo.name<<endl;
	cout << "your age is : " << İnfo.age << endl;
	cout << "your status is : " << İnfo.marrid << endl;
	cout << "your gender is : " << İnfo.gender << endl;
	cout << "your salary is : " << İnfo.salary << endl;
	cout << "your city is : " << İnfo.city << endl;
	cout << "your city is : " << İnfo.work << endl;


}

int main()
{
	Strİnfo peson1;

	Readİnfo(peson1);
	Printİnfo(peson1);

}
