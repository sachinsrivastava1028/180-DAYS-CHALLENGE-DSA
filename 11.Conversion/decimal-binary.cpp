#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the value of 'num': ";
    cin>>num;
    int rem,ans=0,mul=1;

    while(num>0)
    {
        rem=num&1;//reminder //used bitwise operator 
        num= num>>1; //quotient //right shift
        ans+=rem*mul; //ans
        mul*=10; //mul
    }
    cout<<ans<<endl;
}