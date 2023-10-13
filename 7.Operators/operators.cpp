#include<iostream>
using namespace std;

int main()
{
    //binary operators
    cout<<4/3<<endl; //int 
    cout<<4.2/3<<endl; //float
    cout<<4*3<<endl; //int 
    cout<<4.2*3<<endl; //float

    //unary operators
    int a=10;
    int b=a++; //post increment
    cout<<b<<" "<<a<<endl;

    int c=++a; //pre increment
    cout<<c<<" "<<a<<endl;

    int d=a--; //post decrement
    cout<<d<<" "<<a<<endl;

    int e=--a; //pre decrement
    cout<<e<<" "<<a<<endl;
}   