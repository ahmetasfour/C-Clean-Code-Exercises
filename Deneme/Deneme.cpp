// Deneme.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
#include <string>
using namespace std;
struct stPersonelDetile {
    int expirence;
    bool marrid;
    int ChildrenNumber;
};

stPersonelDetile ReadData() {
    stPersonelDetile member;

    cout << "How many years of experience do you have? : \n";
    cin >> member.expirence;

    cout << "Are you married (1 for Yes, 0 for No) ? : \n";
    cin >> member.marrid;

    cout << "How many children do you have ? : \n";
    cin >> member.ChildrenNumber;

    return member;
}

void IsHired(stPersonelDetile member) {
    if (member.expirence >= 5) {
        cout << "Hired\n";
    }
    else if (member.expirence < 5 && member.marrid && member.ChildrenNumber > 2) {
        cout << "Hired\n";
    }
    else {
        cout << "Rejected\n";
    }
}
void PrintData(stPersonelDetile member) {

    cout << member.expirence<< "\n";
    cout << member.ChildrenNumber << "\n";
    cout << member.marrid << "\n";


}

int main() {
    stPersonelDetile x = ReadData();
    IsHired(x);
    PrintData(x);
    return 0;
} 
*/

/*
#include <iostream>
#include <string>
using namespace std;
struct stPersonelDetile {
    int HasDriverLicanse;
    int Age;
};

stPersonelDetile ReadData() {
    stPersonelDetile member;

    cout << "plase enter you age ? : \n";
    cin >> member.Age;

    cout << "do you have driver licanse ? : \n";
    cin >> member.HasDriverLicanse;

    return member;
}

bool IsHired(stPersonelDetile member) {
    return(member.Age > 21 && member.HasDriverLicanse);
}
void result(stPersonelDetile member) {

    if (IsHired(member))
    {
        cout << "hired";

    }
    else cout << "rejected";

}

int main() {
    result(ReadData());


    return 0;
}*/

/*
* pass Fail
* 
#include<iostream>
using namespace std;
enum enPassFail
{
    pass = 1, fail = 2
};

int ReadMark() {
    int mark;
    cout << "enter your mark :\n";
    cin >> mark;
    return (mark);

}
enPassFail chackmark(int mark) {
    if (mark >= 50)
       return enPassFail::pass;

    else
        return enPassFail::fail;


}
void PrintResult(int mark) {

    if (chackmark(mark) == enPassFail::pass)
        cout << "you succsed \n";

    else
        cout << "you fiald \n";

}


int main() {
    PrintResult(ReadMark());
}

* 
*/


