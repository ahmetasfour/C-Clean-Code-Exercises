//call by value :applay the function without change varible 
//call by referance applay the function and make change on varible by referanse &

#include <iostream>
using namespace std;

int swap(int& a , int &b) {
    int swap;
    int a, b;
    swap = a;
    a = b;
    b = swap;
    return(a ,b)

}


int main()
{
    int x, y;
    cout << "enter x num\n";
    cin >> x;
    cout << "enter y num\n";
    cin >> y;
    swap(&x, &y);

}
