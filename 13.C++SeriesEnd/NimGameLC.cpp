#include<iostream>
using namespace std;


bool canWinNim(int n) {
    if(n%4==0)
    return 0;
    else
    return 1;
}

int main()
{
    int n;
    cout << "Enter the value of 'n': ";
    cin >> n;

    
    cout<<canWinNim(n);
}