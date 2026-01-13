#include<iostream>
#include<string>
using namespace std;
class teacher{
    //variable declaration or proprties or attributes
    private://yo private lai access garna fun hunxa
    double salary;
    public:
    string name;
    string department;
    //member function
    void changedepart( string new_depart){
    department  = new_depart;
    }
    //setter-yesley salary ko value lai set garxa
    void setsalary(double s)
    {
        salary=s;
    }
    //getter
    double getsalary(){
        return salary;
    }
};


int main(){
teacher t1;
t1.name="Akriti";
t1.department="science";
t1.setsalary(25000);
cout<<t1.name<<" "<<t1.department<<" "<<t1.getsalary() ;


}
