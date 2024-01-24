#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Number of elements in vector: ";
    cin>>n;

    vector<int>input(n);
    vector<int> prefixsum(n,0);

    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>input[i];
    }

    
    if(n>0)
    {
    prefixsum[0]=input[0];
    for(int i=1;i<n;i++)
    {
        prefixsum[i]=prefixsum[i-1]+input[i];
    }

    cout<<"Original Array: ";
    for(auto x : input)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
    cout<<"Prefix Sum Array: ";
    for(auto y : prefixsum)
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