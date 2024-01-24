#include <iostream>
using namespace std;

int main() 
{
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int*arr=new int[n];

    for(int i=0;i<n;i++) 
    {
      cout<<"Enter element "<<(i+1)<<": ";
      cin>>arr[i];
    }

for (int i=0;i<n;i++) 
{
    for(int j=i;j<n;j++) 
    {
        cout<<"[ ";
        for (int k=i;k<=j;k++) 
        {
          cout<<arr[k]<<" ";
        }
        cout<<"]\n";
    }
  }
}
