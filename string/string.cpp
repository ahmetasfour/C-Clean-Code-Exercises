#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	string num1;
	string num2;

	cout << "enter your name: ";
	//we dont use the cin for full name becuse (cin) just take first word lik asa asa cin just get first word asa not asa asa 
	getline(cin, name),"\n"; //cin.ignore(1, '\n'); يمكن اخذ الانتر ك مدخل لذلك كتبنا هذا القسم لتجاهل الانتر
	cout << "your name is :" << name << endl;
	cout << "enter num1: ";
	cin >> num1 ,"\n";
	cout << "enter num2: ";
	cin >> num2, "\n";

	cout << "******************************************************"<< "\n";
	cout << "length : " << name.length()<<endl;
	cout << "carakter 0,2,4,7,1 : " << name[0]<<"\t" << name[2] << "\t" << name[4] << "\t" << name[7] << "\t" << name[1] << endl;
	cout << "concatanation" << num1 + num2 << endl;
	cout << "multyble" << stoi(num1) * stoi(num2) << endl;

	return 0;

}
