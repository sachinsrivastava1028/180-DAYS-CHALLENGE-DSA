#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of 'n': ";
    cin>>n;

    int i=1;
    do{
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    } while(i<=10);
}