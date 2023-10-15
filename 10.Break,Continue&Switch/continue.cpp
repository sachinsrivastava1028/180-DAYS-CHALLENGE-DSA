#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of 'n': ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(i%4==0)
        continue;
        cout<<i<<" ";
    }
}