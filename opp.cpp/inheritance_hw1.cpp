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
class Marks{
int opp,pm,bc,acc,fin;
public:
void getMarks(){
    cout<<"enter the mark of opp,pm,bc,acc,fin"<<endl;
    cin>>opp>>pm>>bc>>acc>>fin;
}
void displayMarks(){
    cout<<"the marks of opp="<<opp<<endl;
    cout<<"the marks of pm="<<pm<<endl;
    cout<<"the marks of bc="<<bc<<endl;
    cout<<"the marks of acc="<<acc<<endl;
    cout<<"the marks of fin="<<fin<<endl;
}
int totalmark(){
    return opp+pm+bc+acc+fin;
}
};
class Result:public students,public Marks{
float total,percent;
public:
void getdata(){
    getstudents();
    getMarks();
}
void displaydata(){
displaystudents();
    displayMarks();
    total=totalmark();
    percent=total/5;
    cout<<total<<" "<<percent<<endl;
}
};
int main(){
    Result r;
    r.getdata();
    r.displaydata();
    return 0;
}