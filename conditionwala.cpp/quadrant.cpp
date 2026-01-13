//to input x and y and print if it lies in 1st ,2nd ,3rd or 4th quadrant
#include<iostream>
using namespace std;
int main()
{
    int x=-5,y=-8;
    if(x>0&&y>0)
    cout<<"first quadrant";
    else if(x>0&&y<0)
    cout<<"fourth quadrant";
    else if(x<0&&y>0)
    cout<<"second quadrant";
    else if(x<0&&y<0)
    cout<<"third quadrant";
    else if(x!=0 && y==0)
    cout<<"it lies in x axis";
    else if(y!=0&&x==0)
    cout<<"it lies in y axis";
    else
     cout<<"it lies in origin";
    return 0;
}