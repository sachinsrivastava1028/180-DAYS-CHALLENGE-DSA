#include<iostream>
using namespace std;

int main()
{
    // int i,j,m,n;
    // cout<<"Enter the value of m: ";
    // cin>>m;
    // cout<<"Enter the value of n: ";
    // cin>>n;
                         // m: no.of rows
                         // n: no.of columns

    // for(i=1;i<=m;i=i+1)
    // {
    //     for(j=1;j<=n;j=j+1)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    int row,col,m,n;
    cout<<"Enter the value of m: ";
    cin>>m;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(row=1;row<=m;row=row+1)
    {
        for(col=1;col<=n;col=col+1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}