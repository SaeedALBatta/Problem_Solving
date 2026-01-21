/*
    Write a Program to ask the user to enter his/her :
    Age - Driver License
    Then Print "Hired" if his\her age is grater than 21 and s\he has a driver license , otherwise print "Rejected" .
*/

#include <iostream>
using namespace std;

struct stPerson
{
    int Age;
    bool HasDriverLicense ;
};

stPerson ReadInfo()
{
    stPerson info;

    cout << "Plese Enetr Your Age?\n";
    cin  >> info.Age ;

    cout << "Do You Have A Driver license ?\n" ;
    cin  >> info.HasDriverLicense ;

    return info;
}

bool IsAccepted (stPerson Info)
{
    return (Info.Age > 21 && Info.HasDriverLicense);
}

void PrintResult (stPerson Info)
{
    if (IsAccepted(Info))
    {
        cout << "Concrats ; You Hired\n";
    }
    else   
        cout << "Sorry ; You Rejected\n";
}
int main ()
{
    PrintResult(ReadInfo());
    return 0;
}
