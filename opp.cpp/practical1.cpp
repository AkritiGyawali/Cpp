#include<iostream>
using namespace std;
class staff{
public:
double code;
string name;
public:
void getemployee(){
    cout<<"enter the code and name of staff"<<endl;
    cin>>code>>name;
}
void displayemployee(){
    cout<<"the code of employee:"<<code<<endl;
    cout<<"the name of employee:"<<name<<endl;
}


};
class teacher:public staff{
    public:
    string subject;
    double salary;
    public:
    void getteacher(){
        getemployee();
        cout<<"the subject and salary "<<endl;
        cin>>subject>>salary;
    }
    void displayteacher(){
        displayemployee();
        cout<<"the subject of employee:"<<subject<<endl;
        cout<<"the salary of employee:"<<salary<<endl;
}

};
class typist:public staff{
    public:
    float speed;
    public:
    void gettypist(){
        getemployee();
        cout<<"the typing speed of employee:"<<endl;
        cin>>speed;
    }
    void displaytypist(){
        displayemployee();
        cout<<"the typing speed of employee:"<<speed<<endl;
}

    };




    





int main(){
    teacher t;
    typist t1;
    t.getteacher();
    t1.gettypist();
    cout<<"----------empoyee detail--------"<<endl;
    t.displayteacher();
    t1.displaytypist();
return 0;

}
