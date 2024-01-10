#include<iostream>
using namespace std;

int search(int arr[], int n, int x)
    {
        int index=-1; 
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x)
            {
            index =i;
            break;
            }
        }
        return index;
    }

int main()
{   
    int n,x;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<(i+1)<<": ";  
        cin>>arr[i];
    }

    cout << "\nEnter element to be searched: ";
    cin >> x;

    int result=search(arr,n,x);
    cout<<"Index of element "<<x<<": "<<result<<endl;
}