#include<iostream>
using namespace std;
class author{
protected:
string author_name;
string qualification;
public:
void getdata1(){
    cout<<"enter the name and qualification of author"<<endl;
    cin>>author_name>>qualification;
}
void displaydata1(){
    cout<<"the name of author:"<<author_name<<endl;
    cout<<"the qualification:"<<qualification<<endl;
}
};
class publication{
    protected:
    string pname;
    public:
    void getdata2(){
        cout<<"enter the book publication name"<<endl;
        cin>>pname;
    }
    void displaydata2(){
        cout<<"the book publication name:"<<pname<<endl;
    }
};
class book:public author,public publication{
    protected:
    string book_title;
    int price;
    public:
    void getdata(){
        getdata1();
        getdata2();
        cout<<"enter book title and price"<<endl;
        cin>>book_title>>price;
    }
    void displaydata(){
        displaydata1();
        displaydata2();
        cout<<"the book title:"<<book_title;
        cout<<"price:"<<price<<endl;
    }
};
int main(){
    book b;
    b.getdata();
    cout<<"-----bookdetail-----"<<endl;
    cout<<endl;
    b.displaydata();
    return 0;
}