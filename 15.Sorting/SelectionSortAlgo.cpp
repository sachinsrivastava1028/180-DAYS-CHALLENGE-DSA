#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    if(n>1000)
    {
        cout<<"The value of 'n' is not valid"<<endl;
    }

    else
    {
        cout<<"Enter elements one by one:\n";
        for(int i=0;i<n;i++)
        {
            cout<<"Element "<<(i+1)<<": ";
            cin>>arr[i];
        }

        for(int i=0;i<n;i++)
        {
            int index=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[index])
                {
                    index=j;
                }
            }

            swap(arr[i], arr[index]);
        }

        cout<<"Sorted array: ";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
