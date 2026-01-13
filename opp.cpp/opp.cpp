#include<iostream>
using namespace std;
class students{
string name;
int roll_no;
public:
void getstudents(){
    cout<<"enter rollno and name of a student"<<endl;
    cin>>roll_no>>name;
}
void displaystudents(){
cout<<"rollno="<<roll_no<<endl;
cout<<"name="<<name<<endl;
}
};
class marks{
int opp,pm,bc,acc,fin;
public:
void getmarks(){
    cout<<"enter the mark of opp,pm,bc,acc,fin"<<endl;
    cin>>opp>>pm>>bc>>acc>>fin;
}
void displaymarks(){
    cout<<"the marks of opp="<<opp<<endl;
    cout<<"the marks of pm="<<pm<<endl;
    cout<<"the marks of bc="<<bc<<endl;
    cout<<"the marks of acc="<<acc<<endl;
    cout<<"the marks of fin="<<fin<<endl;
}
void totalmark(){
    int total,percent;
    total=opp+pm+bc+acc+fin;
    percent=total/5;
    cout<<total<<" "<<percent<<endl;}

};
class Result:public students,public marks{
    public:
    void getdata(){
        getstudents();
        getmarks();
    }
    void displaydata(){
        displaystudents();
        displaymarks();
        totalmark();
    }

};
int main(){
    Result r;
    r.getdata();
    r.displaydata();
    return 0;
}
