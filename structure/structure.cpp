 // structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//we have two type 1) function 2) procedure :
// when defined function _____func type______funk_name(parametre_type parametres){function blok      return value;}___
// when defined procedure _____void______funk_name(parametre_type parametres){function blok    *****without  return value;}___

#include <iostream>
using namespace std;
struct staddres {
	string city;
	string country;
};

struct stsalary {
	int monthly_salary;
	int yearly_salary;
};

struct stperson {

	string name;
	int age;
	staddres addres;
	stsalary salary;

};

enum gender { male, female };
enum status { marrid, singal };

int main()
{


	stperson jk;
	gender prsgender;
	prsgender = gender::male;
	status prsstatus;
	prsstatus = status::marrid;
	jk.name = "asf";
	jk.age = 23;
	jk.salary.monthly_salary = 2000;
	jk.salary.yearly_salary = jk.salary.monthly_salary*12;
	
	cout << "person namme: " << jk.name<< "\n";
	cout << "person age: " << jk.age << "\n";
	cout << "person monthly salary: " << jk.salary.monthly_salary<< "\n";
	cout << "person salary: " << jk.salary.yearly_salary << "\n";
	cout << "person status: " << prsstatus << "\n";
	cout << "person gender: " << prsgender << "\n";



}