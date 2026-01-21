// Write A Program Print All Prime Numbers From 1 To N
#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime {Prime = 1 , NotPrime = 2};

int ReadPostiveNumber (string Message)
{
    int Number = 0;
    do 
    {
        cout << Message << endl;
        cin  >> Number ;
    } while (Number <= 0) ;
    return Number ;
}

enPrimeNotPrime CheckPrime (int Number)
{
    int M = round(Number/2) ;
    for (int i = 2 ; i <= M ; i++)
    {
        if (Number % i == 0)
            return enPrimeNotPrime::NotPrime ;
    }
    return enPrimeNotPrime::Prime ;
}

void PrintPrimeNumbersFrom1ToN (int Number)
{
    cout << "\n";
    cout << "Prime Numbers From  " << 1 << " To " << Number ;
}

int main ()
{
    PrintPrimeNumbersFrom1ToN(ReadPostiveNumber("Plese enter a postiv"));
    return 0 ; 
}