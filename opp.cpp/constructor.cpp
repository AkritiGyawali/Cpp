//constructor is a function..in this program rectangle() is constructor..ani constructor rw class ko nam eutai hunxa
#include<iostream>
using namespace std;
class rectangle{
    public:
    int l,b;
    rectangle(){//default constructor-no argument passed
    l=0;
    b=0;
    cout<<l<<" "<<b<<endl;
    }
    rectangle( int x,int y){//parameterized constructor-argument passed
    l=x;
    b=y;
    cout<<l<<" "<<b<<"\n";

    }
    rectangle(rectangle &r){//copy constructor-yesley aru constructor lai copy garney kam garxa

        l=r.l;
        b=r.b;
    }
    ~rectangle(){//destructor
    cout<<"hiii"<<"\n";
    }
};



int main(){
    rectangle r1;
    //cout<<r1.l<<" "<<r1.b<<endl;
    rectangle r2(2,3);
    //cout<<r2.l<<" "<<r2.b<<"\n";
   // rectangle r3=r2;
    //cout<<r3.l<<" "<<r3.b<<"\n";
    //rectangle r4=r1;
    //cout<<r4.l;

    return 0;


}//yo program mw sabai type ko constructor xa ni....this is called constructor overloaded
