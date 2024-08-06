#include<iostream>
#include<string>

using namespace std;

int main()
{
    string st1 = "121.969684";
    int n1 = 109;
    float n2 = 344.43;
    double n3 = 432.87576;

    cout << "string to int :" << stoi(st1) << endl;
    cout << "string to float :" << stof(st1) << endl;
    cout << "string to double :" << stod(st1) << endl;




    cout << "'int to string :" << to_string(n1) << endl;
    cout << "string to double :" << to_string(n2) << endl;
    cout << "string to float :" << to_string(n3) << endl;








}