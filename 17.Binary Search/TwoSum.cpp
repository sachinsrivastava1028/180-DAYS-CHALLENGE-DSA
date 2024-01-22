#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the elements of array: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Element"<<i+1<<": ";
        cin>>arr[i];
    }

    int target, x, start, end;

    cout<<"Enter the target: "<<endl;
    cin>>target;


    for(int i=0;i<n-1;i++)
    {
        x=target-arr[i];
        start=i+1;
        end=n-1;
        while(start<=end)
        {
            int mid = (start + end)/2;
            if(arr[mid]==x)
            {
                cout<<"got it";
                break;
            }
            else if(arr[mid]<x)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        break;
    }
}