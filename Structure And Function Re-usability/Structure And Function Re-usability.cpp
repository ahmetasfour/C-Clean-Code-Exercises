// Structure And Function Re-usability.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Str?nfo
{
	int age, salary;
	string name ,city;
	bool marrid;
	char gender;
};

void Read?nfo(Str?nfo &?nfo) {

	cout << "enter your name: ";
	cin >> ?nfo.name;
	cout << endl;

	cout << "enter your city: ";
	cin >> ?nfo.city;
	cout << endl;

	cout << "enter your age: ";
	cin >> ?nfo.age;
	cout << endl;

	cout << "enter your salary: ";
	cin >> ?nfo.salary;
	cout << endl;

	cout << "enter your status (marrid/single): ";
	cin >> ?nfo.marrid;
	cout << endl;

	cout << "enter your gander: ";
	cin >> ?nfo.gender;
	cout << endl;

}

void Print?nfo(Str?nfo ?nfo) {

	cout << "your name is : "<< ?nfo.name<<endl;
	cout << "your age is : " << ?nfo.age << endl;
	cout << "your status is : " << ?nfo.marrid << endl;
	cout << "your gender is : " << ?nfo.gender << endl;
	cout << "your salary is : " << ?nfo.salary << endl;
	cout << "your city is : " << ?nfo.city << endl;

}

int main()
{
	Str?nfo peson1;

	Read?nfo(peson1);
	Print?nfo(peson1);

}
