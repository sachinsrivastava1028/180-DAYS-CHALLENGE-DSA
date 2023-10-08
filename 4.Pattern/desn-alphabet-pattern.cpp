#include<iostream>
using namespace std;

int main()
{
    int i;
    char j;
    
    for(i=1;i<=5;i=i+1)
    {
        for(j='e';j>='a';j=j-1)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}