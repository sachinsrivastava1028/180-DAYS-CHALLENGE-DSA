#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the value of 'a': ";
    cin>>a;
    cout<<"Enter the value of 'b': ";
    cin>>b;
    cout<<"Enter the value of 'c': ";
    cin>>c;

    if(a>b&&a>c) //and operator
    cout<<"Yes";
    else
    cout<<"No";

    //or operator
    char n;
    cout<<"Enter the value of 'n': ";
    cin>>n;
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    cout<<"Vowel";
    else
    cout<<"Consonant"<<endl;

    //not operator
    cout<<!123456789<<endl;
    cout<<!0<<endl;
}