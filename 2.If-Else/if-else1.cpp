#include<iostream>
using namespace std;

int main()
{
    int package;
    cout<<"Enter the package: ";
    cin>>package;
    

    if(package>10)
    {
        cout<<"Accepted";
    }
    else
    {
        cout<<"Rejected";
    }
}