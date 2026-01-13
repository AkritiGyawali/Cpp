#include<iostream>
using namespace std;
class employee{
double id;
string name;
double salary;
public:
void getemployee(){
    cout<<"enter eid,ename,salary"<<endl;
    cin>>id>>name>>salary;
}
void displayemployee(){
    cout<<"the id of employee:"<<id<<endl;
    cout<<"the name of employee:"<<name<<endl;
    cout<<"the salary of employee:"<<salary<<endl;
}
};
class company:public employee{
    string company_name,location;
    public:
    string emp[10];
public:
void getdata(){
    cout<<"enter the name of company and location"<<endl;
    cin>>company_name>>location;
    cout<<"Employee:"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<i+1<<" ";
        getemployee(); 
    }
}
void displaydata(){
    cout<<"................."<<endl;
    cout<<"the name of company and its location is"<<company_name<<" "<<location<<endl;
    for(int i=0;i<10;i++){
    displayemployee();
}
}};
int main(){
    company c;
    c.getdata();
    c.displaydata();
    return 0;
    

}