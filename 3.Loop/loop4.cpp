#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=1;i<=n;i=i+1)
    {
        cout<<i<<" Square is:"<<i*i<<endl;    
    }
}