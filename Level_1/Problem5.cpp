/*
    Write a Program to ask the user to enter his/her :
    Age - Driver License
    Then Print "Hired" if his\her age is grater than 21 
    and s\he has a driver license , otherwise print "Rejected" .
    Case 2 : if Has Recommendation print "Hired"
*/

#include <iostream>
using namespace std;

struct stPerson {
    int Age;
    bool HasDriverLicense;
    bool HasRecommendation;
};

stPerson ReadInfo ()
{
    stPerson Info;

    cout << "Plese Enetr Your Age?\n";
    cin  >> Info.Age ;

    cout << "Do You Have A Driver license ?\n" ;
    cin  >> Info.HasDriverLicense ;

    cout << "Do You Have A Recommendation ?\n" ;
    cin  >> Info.HasRecommendation ;

    return Info ;
}
bool IsAccepted (stPerson Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
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