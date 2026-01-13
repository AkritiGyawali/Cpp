//to print day of week name 

#include<iostream>
using namespace std;
int main()
{
    int week;
    cout<<"enter the munber(1 to 7)";
    cin>>week;
    switch(week){
        case 1:
        cout<<"Sunday";
        break;
        case 2:
        cout<<"Monday";
        break;
        case 3:
        cout<<"tuesday";
        break;
        case 4:
        cout<<"wenesday";
        break;
        case 5:
        cout<<"thursday";
        break;
        case 6:
        cout<<"friday";
        break;
        case 7:
        cout<<"saturday";
        break;
        default:
        cout<<"invalid";

    }

    return 0;
}