#include<iostream>
using namespace std;
 
int main()
{
    function print_me(integer n)
    {
        if(n<1) return
        print n;
        print_me(n-1)
    }
}