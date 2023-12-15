#include<iostream>
using namespace std;

int Sum(int m, int n) // Function declare
{
    int ans=m+n; // Function define
    return ans;
}

void Mul(int m, int n)
{
    int ans=m*n;
    cout<<ans<<endl;
}

void fun()
{
    cout<<"Hello Coder Army"<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;


    cout<<"Sum of two num: "<<Sum(a,b); // Function call
    cout<<endl;
    //another way to call function
    int x=Sum(a,b);
    cout<<x<<endl;
    Mul(a,b); // Function call
    fun();
}