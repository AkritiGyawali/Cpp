#include<iostream>
using namespace std;
class Akriti{
private:
int a;
public:
void setdata(int x){
    a=x;
}
friend void operator ++(Akriti&);
};
void operator++(Akriti& m){
++m.a;
cout<<m.a<<endl;
}
int main(){
    Akriti a1;
    a1.setdata(5);
    ++a1;//equivalent to a1.operator ++
    return 0;
}