#include<iostream>
using namespace std;

int main()
{
     int a,b;
     cout<<"Enter the value of 'a': ";
     cin>>a;
     cout<<"Enter the value of 'b': ";
     cin>>b;

     if(a>b) //greater than
     cout<<"Yes";
     else 
     cout<<"No"<<endl;

    if(a==b) //equals to
     cout<<"Yes";
     else 
     cout<<"No"<<endl;
 
    if(a<b) // less than
     cout<<"Yes";
     else 
     cout<<"No"<<endl;

    if(a<=b) // less than, equals to
     cout<<"Yes";
     else 
     cout<<"No"<<endl;

    if(a>=b) // greater than, equals to
     cout<<"Yes";
     else 
     cout<<"No"<<endl;

      if(a!=b) // not equals to
     cout<<"Yes";
     else 
     cout<<"No"<<endl;


}