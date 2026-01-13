//to print greatest among three number using nested if
#include <iostream>
using namespace std;
int main()
{
    int a=8,b=6,c=9;
    //a>b,b>c yo vaneyko a>b>c
    if(a>b){
        if(a>c)cout<<"a is greatest";
        else cout<<"cis greatest";//yo chahi a>c ko else ho ni...
        
    }
    else //a>b ko opposite b<a hunxa tara b>a tw vhayana soo ya ni feri if () lagauna paryo

{
    if(b>c)
    cout<<"b is greatest";
else cout<<"c is greatest";
}
return 0;
}