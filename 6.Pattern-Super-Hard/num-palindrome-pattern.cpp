#include<iostream>
using namespace std;

int main()
{
    int i,j,n; 
    cout<<"Enter the value of 'n': ";
    cin>>n;

    for(i=1;i<=n;i++)
    {    
      //print space
        for(j=1;j<=n-i;j++)
        {
         cout<<"  ";
        }
      //print inc num
         for(j=1;j<=i;j++)
         {
            cout<<j<<" ";
         }
      //print dec
         for(j=i-1;j>=1;j--)
         {
            cout<<j<<" ";
         }
         cout<<endl;
    }
}