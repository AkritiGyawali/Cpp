#include<iostream>
using namespace std;
class alpha{
    private:
    int a;
    public :
    void getdata(int x){
        a=x;
    
    }
    friend class beta;
};
class beta{
    private:
    int b;
    public:
    void getdata(int y){
        b=y;
    }
    void add(alpha z){
        int e;
        e=z.a+b;
        cout<<e;
    }
};
int main(){
    beta b1;
    alpha a1;
    a1.getdata(3);
    b1.getdata(6);
    b1.add(a1);
    return 0;
}