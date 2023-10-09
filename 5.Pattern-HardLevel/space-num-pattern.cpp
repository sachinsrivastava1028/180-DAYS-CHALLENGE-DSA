#include<iostream>
using namespace std;

int main()
{
    int i,j,row;
    cout<<"Enter the value of 'row': ";
    cin>>row;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            cout<<"  ";
        }
        
        for(j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
} 