//to display the area of rectangle and circle using nested class.
#include<iostream>
using namespace std;
class A{
    public:
    int l,b;
   
    void abc(){
        cout<<"enter length and breadth"<<endl;
        cin>>l>>b;
    }
    void display(){
        cout<<"area of rectangle"<<l*b<<endl;
    }
    class B{
        public:
        int r=4;
        void def(){
            cout<<"enter the radius of circle"<<endl;
            cin>>r;
        }
        void display(){
            cout<<"area of circle"<<3.14*r*r<<endl;

        }
    };
};



int main(){
    A obj1;
    A::B obj2;
    obj1.abc();
    obj1.display();
    obj2.def();
    obj2.display();
    return 0;


}
