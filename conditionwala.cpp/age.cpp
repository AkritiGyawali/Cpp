//to intput three age and display youngest  age 3250
#include <iostream>
using namespace std;
int main()
{
    int a=40,b=42,c=25;
    //a<b,b<c yo vaneyko a>b>c....a=6,b=7,c=8
    if(a<b){
        if(a<c)cout<<"a is younngeat";
        else cout<<"cis youngest";//yo chahi a>c ko else ho ni...
        
    }
    else //a<b ko opposite b<a hunxa tara b<a tw vhayana soo ya ni feri if () lagauna paryo

{
    if(b<c)
    cout<<"b is youngest";
else cout<<"c is youngest";
}
return 0;
}