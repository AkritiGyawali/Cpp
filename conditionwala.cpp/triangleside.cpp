//to test 3 int are side of a triangle
#include <iostream>
using namespace std;
int main(){
    int a=3,b=4,c=5;
    if((a+b)>c&&(b+c)>a&&(c+a)>b)cout<<"a,b,c are side of triangle";
    else cout<<"not";
    return 0;
}