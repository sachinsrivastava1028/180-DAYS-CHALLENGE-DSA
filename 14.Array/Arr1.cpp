#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    float a;
    cout<<sizeof(a)<<endl; // sizeof-inbuilt function
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;

    return 0;
}