#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the value of 'n': ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(char x='A'; x<='A'+i-1; x++)
        {
            cout<<x<<" ";        
        }

// Alternate logic
        // for(j=1;j<=i;j++)
        // {
        //     char x = 'A'+j-1;
        //     cout<<x<<" ";
        // }
        cout<<endl;
    }
}