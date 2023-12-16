#include<iostream>
using namespace std;


void Swap(int&a,int&b) //passing by reference
{
    int c;
    c=a;
    a=b;
    b=c;
}

void Swap(float&c,float&d) //Function overloading but differnt in arguments
{
    float e;
    e=c;
    c=d;
    d=e;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;

    float f1,f2;
    cout<<"Enter the value of f1: ";
    cin>>f1;
    cout<<"Enter the value of d: ";
    cin>>f2;
    Swap(f1,f2);
    cout<<f1<<" "<<f2<<endl;
}

