#include<iostream>
using namespace std;
class author{
protected:
string author_name;
string qualification;
public:
void getdata(){
    cout<<"enter the name and qualification of author"<<endl;
    cin>>author_name>>qualification;
}
void displaydata(){
    cout<<"the name of author:"<<author_name<<endl;
    cout<<"the qualification:"<<qualification<<endl;
}
};
class publication{
    protected:
    string pname;
    public:
    void getdata(){
        cout<<"enter the book publication name"<<endl;
        cin>>pname;
    }
    void displaydata(){
        cout<<"the book publication name:"<<pname<<endl;
    }
};
class book:public author,public publication{
    protected:
    string book_title;
    int price;
    public:
    void getdata(){
        getdata();
        getdata();
        cout<<"enter book title and price"<<endl;
        cin>>book_title>>price;
    }
    void displaydata(){
        displaydata();
        displaydata();
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