#include<iostream>
using namespace std;
int main(){
    int x=3;
    int* p=&x;//int* is a datatype
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    //here *p me x ko value xa aba tesma value change garna ni paiyo
    *p=23;
    cout<<*p;
    cout<<endl;
    cout<<x;
}//& ley address store garxa rw * ley tyo address me vako value store garxa.
/*features of pointer
-we can store the address of the variable using pointer(&)
-access the values of the variable whose address is in the pointer */
