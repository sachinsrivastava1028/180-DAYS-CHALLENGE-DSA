#include<iostream>
using namespace std;

int main()
{
    int i,j,row,col;
    cout<<"Enter the value of 'row': ";
    cin>>row;
    cout<<"Enter the value of 'col': ";
    cin>>col;

    for(i=1;i<=row;i=i+1)
    {
        for(j=1;j<=col;j=j+1)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}