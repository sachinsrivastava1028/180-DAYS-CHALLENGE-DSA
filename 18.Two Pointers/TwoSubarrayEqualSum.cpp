#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

bool divide(vector<int>arr)
{
    int prefix=0, total_sum=0, n=arr.size();

    for(int i=0;i<n;i++)
    total_sum+=arr[i];

    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        if(total_sum==2*prefix)
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    vector<int>v(n);
    cout<<"Enter the elements in array ";
    for(int i=0;i<n;i++)
    {
        cout<<"Elements "<<i+1<<": ";
        cin>>v[i];
    }

    cout<<divide(v);
}