#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements you want in array: ";
    cin>>n;

    int arr[n];
    cout << "\nEnter Elements:\n";
    for(int i = 0; i < n; i++) 
    {
        cout << "Element ["<<i+1<<"]: ";
        cin >> arr[i];
    }

    int start=0,end=n-1;

    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    };

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}