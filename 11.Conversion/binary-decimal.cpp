#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the binary number: ";
    cin>>num;

    int ans=0, rem=1, mul=1; 

    while(num>0)
    {
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul*=2;
    }
    cout<<ans<<endl;
}