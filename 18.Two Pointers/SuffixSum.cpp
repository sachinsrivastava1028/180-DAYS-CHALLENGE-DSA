#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Number of elements in vector: ";
    cin>>n;

    vector<int>input(n);
    vector<int> suffixsum(n,0);

    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>input[i];
    }

    if(n>0)
    {
    suffixsum[n-1]=input[n-1];
    for(int i=n-2;i>=0;i--)
    {
        suffixsum[i]=suffixsum[i+1]+input[i];
    }

    cout<<"Original Array: ";
    for(auto x : input)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
    cout<<"Suffix Sum Array: ";
    for(auto y : suffixsum)
    {
        cout<<y<<" ";
    }
    }

    else
    {
        cout<<"Invalid input"<<endl;
    }

    return 0;
}