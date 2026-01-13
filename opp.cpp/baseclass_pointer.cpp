#include<iostream>
using namespace std;
class teachmedia{
    protected:
    string author;
    double price;
    public:
    void getdata(){
        cout<<"enter the name of book author"<<endl;
        cin>>author;
        cout<<"enter the price of book"<<endl;
        cin>>price;
    }
    void displaydata(){
        cout<<"the name of book author is :"<<author<<endl;
        cout<<"the price of book is :"<<price<<endl;
    }
};
class book :public teachmedia{
protected:
int pg_no;
public:
void getdata(){
cout<<"enter the number of pages"<<endl;
cin>>pg_no;

}
void displaydata(){
    cout<<"the number of pages are:"<<pg_no<<endl;
}

};
class CD :public teachmedia{
    public:
    void getdata(){
cout<<"the book is dedicated to....."<<endl;

    }
};
int main(){
    teachmedia *t1,t;
    book b1;
    CD c1;
    t1=&t;
    
    t1->getdata();
   
    b1.getdata();
    
    t1->displaydata();
    
    b1.displaydata();
    
    c1.getdata();
    return 0;
    
}