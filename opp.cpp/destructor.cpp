//destructor is also a function called when object is deleted
#include<iostream>
using namespace std;
class rectangle{
    public:
    int l,b;
    rectangle(){
    l=0;
    b=0;
    }
    rectangle( int x,int y){
        l=x;
    b=y;

    }
    rectangle(rectangle &r){

        l=r.l;
        b=r.b;
    }
    ~rectangle(){//destructor 
    cout<<"hiii"<<"\n";
    }
};



int main(){
    rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;
    rectangle r2(2,3);
    cout<<r2.l<<" "<<r2.b<<"\n";
    rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<"\n";
    rectangle r4=r1;
    cout<<r4.l;

    return 0;


}
