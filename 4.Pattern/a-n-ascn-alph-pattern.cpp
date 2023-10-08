#include<iostream>
using namespace std;

int main()
{
    int i,j,row,col;
    
    cout<<"Enter the row: ";
    cin>>row;
    cout<<"Enter the col: ";
    cin>>col;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            char m='A'+j-1;
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
    }
}