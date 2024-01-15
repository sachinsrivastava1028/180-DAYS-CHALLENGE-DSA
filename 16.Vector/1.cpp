#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // // Creating vector
    // vector<int>v;

    // // Adding elements to the vector
    // cout<<"Size of the v: "<<v.size()<<endl;
    // cout<<"Capacity of the v: "<<v.capacity()<<endl;
    // v.push_back(1);
    // cout<<"Size of the v: "<<v.size()<<endl;
    // cout<<"Capacity of the v: "<<v.capacity()<<endl;
    // v.push_back(2);
    // cout<<"Size of the v: "<<v.size()<<endl;
    // cout<<"Capacity of the v: "<<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<"Size of the v: "<<v.size()<<endl;
    // cout<<"Capacity of the v: "<<v.capacity()<<endl;
    // v.push_back(4);
    // cout<<"Size of the v: "<<v.size()<<endl;
    // cout<<"Capacity of the v: "<<v.capacity()<<endl;
    // v.push_back(5);
    // cout<<"Size of the v: "<<v.size()<<endl;
    // cout<<"Capacity of the v: "<<v.capacity()<<endl;
    
    // // Printing vector
    // for (auto i : v) 
    // {
    //     cout<<i<<" ";
    // }    
    
    // // Update value  
    // v[0]=5;
    // v[1]=4;
    // v[2]=3;
    // v[3]=2;
    // v[4]=1;
    // cout << "\nAfter updating values:\n";
    // for (auto i : v) 
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    
    // // Intializing vector with values
    // vector<int>v1(5,1);
    // cout<<"Size of the v1: "<<v1.size()<<endl;
    // cout<<"Capacity of the v1: "<<v1.capacity()<<endl;
    // v1.push_back(2);
    // cout<<"Size of the v1: "<<v1.size()<<endl;
    // cout<<"Capacity of the v1: "<<v1.capacity()<<endl;

    // // Deleting values from vector
    // vector<int>vnew;
    // vnew.push_back(40);   
    // vnew.push_back(41);    
    // vnew.push_back(42);    
    // vnew.push_back(43);    
    // vnew.push_back(44);    
    // vnew.push_back(45);    
    // vnew.push_back(46); 
    // // Deleting element from last 
    // vnew.pop_back();
    // cout<<"Size of vnew: "<<vnew.size()<<endl;
    // cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;   

    // // Deleting element from a particular index
    // vnew.erase(vnew.begin()+1);
    // cout<<"Size of vnew: "<<vnew.size()<<endl;
    // cout<<"Capacity of vnew: "<<vnew.capacity()<<endl; 
    // for(int i=0;i<vnew.size();i++)
    // {
    //     cout<<vnew[i]<<" ";
    // }
    // cout<<endl;

    // // Inserting element at a particular index
    // vnew.insert(vnew.begin()+1,46);
    // for(int i=0;i<vnew.size();i++)
    // {
    //     cout<<vnew[i]<<" ";
    // }
    // cout<<endl;

    // //direct change a element at a particular index
    // vnew[2]=47;
    // for(int i=0;i<vnew.size();i++)
    // {
    //     cout<<vnew[i]<<" ";
    // }
    // cout<<endl;

    // // Removing all elements of the vector
    // vnew.clear();
    // cout<<"Size of vnew: "<<vnew.size()<<endl;
    // cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;
    // for(int i=0;i<vnew.size();i++)
    // {
    //     cout<<vnew[i]<<" ";
    // }

    // vector<int>a;
    // a.push_back(21);
    // a.push_back(22);
    // a.push_back(23);
    // a.push_back(24);
    // // Printing front and back elements of the vector
    // cout<<a[0]<<endl;
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;
    // cout<<a[a.size()-1]<<endl;

    // vector<int>b;
    // // Copying values of 'a' in 'b'
    // b = a;
    // // Displaying both vectors
    // cout<<"Vector 'a': ";
    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<"\nVector 'b': ";
    // for(int i=0;i<b.size();i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    // //Another way of displaying both vectors
    // for(auto i: a)
    // cout<<i<<" ";
    // cout<<endl;
    // for(auto i: b)
    // cout<<i<<" ";

    // Sorting vector in increasing and decreasing order both
    vector<int>ans;
    ans.push_back(5);
    ans.push_back(10);
    ans.push_back(15);
    ans.push_back(20);
    ans.push_back(25);

    sort(ans.begin(),ans.end());
    cout<<"Sorted in increasing order : ";
    for(auto x: ans)
    cout<<x<<" ";
    cout<<endl;
    // reverse(ans.begin(),ans.end());
    // // sort(ans.rbegin(),ans.rend());
    // // sort(ans.begin(),ans.end(),greater<int>());
    // cout<<"Sorted in decreasing order : ";
    // for(auto y: ans)
    // cout<<y<<" ";

    // Search in Binary Search
   cout<<binary_search(ans.begin(),ans.end(),20)<<endl;

    // Index of an element in binary search
    cout<<find(ans.begin(),ans.end(),20)-ans.begin()<<endl;

    // Search
      
}