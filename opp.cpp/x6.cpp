#include<iostream>
using namespace std;
class distance{
    private :
    int kg;
    public:
    distance(int x){
        kg=x;
    }
    int getkilo(){
        return kg;
    }
};
class dist{
    int gm;
    public:
    
    dist(int y){
        gm=y;
    }
    dist(distance & d){
        gm=d.getkilo()*1000;
        
    }
    void display(){
        cout<<gm;
    }
};
int main(){
    distance a1(6);
    dist b1(a1);
    b1.display();
    return 0;

}