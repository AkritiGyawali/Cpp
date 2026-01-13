#include<iostream>
using namespace std;
class alpha{
    private:
    int a;
    public:
    void getdata(int x){
        a=x;
      

    }
    friend class beta;
};
class beta{
    private:
    int b;
    public:
    void getdata1(int y){
        b=y;
      
    }
    void fun(alpha z){
        int e;
        e=z.a+b;
        cout<<e;
    }
};



int main(){
alpha a1;
a1.getdata(3);
beta b1;
b1.getdata1(4);
b1.fun(a1);
return 0;

}
