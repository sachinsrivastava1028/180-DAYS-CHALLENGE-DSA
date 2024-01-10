#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;

    int arr[n]={1,2,3,4,5,6,8,9};
    int sum=0;
    
    for(int i=0;i<n-1;i++)
    {
        sum+=arr[i];
    }

    int ans=n*(n+1)/2;

    cout<<"The Missing number is "<<ans-sum;
}