#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of 'n': ";
    cin>>n;

    int i=1;
    while(i<=n)
    {
        if(i==5)
        break;

        cout<<i<<" ";
        i++;
    }
}