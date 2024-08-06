// Function&Procedur.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
void MySumProcedur() {
    int num1, num2,result;
    cout << "enter first num\n";
    cin >> num1;
    cout << "enter secound num\n";
    cin >> num2;
    result = num1 + num2;
    cout << result;
}
int SumFunction(int a, int b) {
    return a+b;
}


int main()
{
    int x, y;
    cout << "enter x num\n";
    cin >> x;
    cout << "enter y num\n";
    cin >> y;
    int result = SumFunction(x, y);
    cout << result;




 
   MySumProcedur();

}
