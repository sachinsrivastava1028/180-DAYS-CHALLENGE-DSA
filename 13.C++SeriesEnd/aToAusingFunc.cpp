#include<iostream>
using namespace std;

char Convert(char name)
{
    char ans=name-'a'+'A';
    return ans;
}

int main()
{
    char name;
    cout<<"Enter name: ";
    cin>>name;

    cout<<Convert(name);
}