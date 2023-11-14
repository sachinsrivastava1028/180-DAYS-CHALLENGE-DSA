#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the binary number: ";
    cin>>num;

    int ans=0, rem, mul=1; 

    while(num>0)
    {
        rem=num%10; //remainder
        num=num/10; //quotient
        ans=rem*mul+ans; //answer
        mul*=8; //multiplication
    }
    cout<<ans<<endl;
}