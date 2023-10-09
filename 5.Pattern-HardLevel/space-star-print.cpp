#include<iostream>
using namespace std;

int main()
{
    int i,j,row;
    cout<<"Enter the value of 'row': ";
    cin>>row;

    for(i=1;i<=row;i=i+1)
    {
        for(j=1;j<=row-i;j=j+1)
        {
        cout<<"  ";
        }

        for(j=1;j<=i;j=j+1)
        {
            cout<<"* ";
        }
        cout<<endl;
    } 
}