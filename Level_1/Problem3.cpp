// Check Odd Or Even

#include <iostream>

using namespace std;

enum enTypeNumber
{
    Odd = 1,
    Even = 2
};

int ReadNumber()
{
    int Number;
    cout << "Please Enter Number?\n";
    cin >> Number;
    return Number;
}

enTypeNumber CheckNumberType(int Number)
{
    if (Number % 2 == 0)
        return enTypeNumber::Even;
    else
        return enTypeNumber::Odd;
}

void PrintNumberType(int Number)
{
    if (CheckNumberType(Number) == enTypeNumber::Even)
        cout << "The Number Is Even\n";
    else
        cout << "The Number Is Odd\n";
}

int main()
{
    PrintNumberType(ReadNumber());
    return 0;
}