#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements:"<<endl;
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cout<<"Element [" << i+1 << "] : ";
        cin>>arr[i];

        if(arr[i]>ans)
        {
        ans=arr[i];
        }
    }

    int second=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(ans!=arr[i])
        {
            second=max(second,arr[i]);
        }
    }
    cout<<"Second Max element of Array is:"<<second<<endl;
}