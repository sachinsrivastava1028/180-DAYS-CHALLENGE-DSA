#include<iostream>
using namespace std;

void Prime(int x)
{
    if(x<2)
    {
        cout<<0<<endl;
        return;
    }

    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            cout<<0<<endl;
            return ;
        }
    }
    cout<<1<<endl;
    return;
}

int Factorial(int y)
{
    int ans=1;
    for(int i=1;i<=y;i++)
    {
        ans=ans*i;
    }
    return ans;
}
int main()
{
    int a,b;
    cout<<"Enter the value of 'a': ";
    cin>>a;
    cout<<"Enter the value of 'b': ";
    cin>>b;
    Prime(a);
    cout<<Factorial(a)<<endl;
    Prime(b);
    cout<<Factorial(b)<<endl;
    Prime(b-a);
    cout<<Factorial(b-a)<<endl;
}