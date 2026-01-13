#include<iostream>
using namespace std;
class teachmedia{
    protected:
    string author;
    double price;
    public:
     void getdata(){
        cout<<"enter the name of book author and it's price"<<endl;
        cin>>author>>price;
     }
    void displaydata(){
        cout<<"the name of author is:"<<author<<endl;
        cout<<"the price is:"<<price;
    }
};
class book:public teachmedia{
protected:
int np_page;
public:
void getdata(){
cout<<"enter the no of pages"<<endl;
cin>>np_page;
}
void displaydata(){
    cout<<"the no.of pages of book"<<np_page;
}
};
class CD:public teachmedia{
    public:
    void displaydata(){
        cout<<"the book is dedicated to biprash"<<endl;
    }
};
int main(){
    teachmedia *t,t1;
    book b1;
    CD c1;
    t=&t1;
    t->getdata();
    b1.getdata();
    t->displaydata();
    b1.displaydata();
    c1.displaydata();
    return 0;

}