#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in Array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<<n<<" elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Element"<<i+1<<": ";
        cin>>arr[i];
    }

    int last=arr[n-1];

    for(int i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=last;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}