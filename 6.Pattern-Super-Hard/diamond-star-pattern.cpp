#include<iostream>
using namespace std;

int main()
{
    int i,j,k,a,b,c,n;
    cout<<"Enter the value of 'n': ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=0;j--)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

      for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(k=i;k>=1;k--)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}