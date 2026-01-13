#include<iostream>
using namespace std;
class increase{
    private:
    int a;
    public:
    void getdata(int x){
        a=x;
    }
    friend void operator ++(increase &);
};
void operator ++(increase& m){
    int b;
    b=++m.a;
    cout<<b;
}
int main(){
    increase i;
    i.getdata(7);
    ++i;
    return 0;
}