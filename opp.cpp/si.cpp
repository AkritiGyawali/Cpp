//to find simple interest using constructor
#include<iostream>
using namespace std;
class interest{
    public:
    int p,t,r;
    int add(int x,int y)
    {
        return x+y;
    }
    //using default constructor
    interest(){
        p=100;
        t=2;
        r=3;
       // cout<<(p*t*r)/100<<endl;

    }
    //using parameterized constructor
    interest (int a,int b,int c){
        p=a;
        t=b;
        r=c;
       // cout<<(p*t*r)/100<<endl;
    }
    //using copy constructor
    interest(interest &i)
    {
        p=i.p;
        t=i.t;
        r=i.r;
        cout<<(p*t*r)/100<<endl;
    }
    
    
};



int main(){
interest i1;//deault constructor lai call gareyko
//cout<<(i1.p*i1.t*i1.r)/100<<"\n";
interest i2(100,3,4);//parameterized constructor lai call gareyko
//cout<<(i2.p*i2.t*i2.r)/100<<"\n";
//interest i3=i2;//copy constructor
//interest i4=i1;
interest hi;
cout<<hi.add(3,4);

}
