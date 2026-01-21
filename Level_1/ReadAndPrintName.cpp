// Read Name And Print It

#include <iostream>
#include <string>

using namespace std;

string ReadName ()
{
    string Name;
    cout << "Plese Enter Your Name?\n" ;
    getline(cin , Name) ;
    return Name ;
}

void PrintName (string Name)
{
    cout << "Your Name IS : " << Name << endl;
}

int main ()
{
    PrintName(ReadName());
    return 0 ;
}
