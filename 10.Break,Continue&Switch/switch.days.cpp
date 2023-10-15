#include<iostream>
using namespace std;

int main()
{
    int day;
    cout<<"Enter the value of 'Day': ";
    cin>>day; 

    switch(day)
    {
        case 1:
        cout<<"Mon";
        break;

        case 2:
        cout<<"Tues";
        break;
         
        case 3:
        cout<<"Wed";
        break;

        case 4:
        cout<<"Thurs";
        break;
    
        case 5:
        cout<<"Fri";
        break;
    
        case 6:
        cout<<"Sat";
        break;
        
        case 7:
        cout<<"Sun";
        break;

        default:
        cout<<"";
    }
}