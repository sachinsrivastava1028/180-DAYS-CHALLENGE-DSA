#include<iostream>
using namespace std;

int main()
{
    
    int n,power,i,num;
    cout<<"Enter the value of 'n': ";
    cin>>n;
    cout<<"Enter the value of 'power': ";
    cin>>power;
    num = n;

    for(i=1;i<power;i=i+1)
    {
        num=num*n;
    }

    cout<<num;
}