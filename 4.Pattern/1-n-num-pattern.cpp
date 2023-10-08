#include<iostream>
using namespace std;

int main()
{

    int i,j,row,col,count=1;
    cout<<"Enter the row: ";
    cin>>row;
    cout<<"Enter the col: ";
    cin>>col;

    for(i=1;i<=row;i=i+1)
    {
        for(j=1;j<=col;j=j+1)
        {
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}