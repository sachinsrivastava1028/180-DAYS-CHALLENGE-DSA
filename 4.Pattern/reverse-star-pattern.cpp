#include<iostream>
using namespace std;

int main()
{
    int i,j,row;
    cout<<"Enter the row: ";
    cin>>row;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-(i-1);j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}