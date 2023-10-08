#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter the marks: " ;
    cin>>marks;

    
    if (marks>33)
    {
        cout<<"Pass";
    }

    if (marks==33)
    {
        cout<<"Just Passed";
    }
    
    else 
    {
        cout<<"Fail";
    }

}