#include<iostream>
using namespace std;
class account{
  public:
  double acc_no;
  double balance;
  static int min_balance;
  public:
  void getdata(){
    cout<<"enter the account name and balance"<<endl;
    cin>>acc_no>>balance;
  }  
  void displaydata(){
    cout<<"account no:"<<acc_no<<endl;
    cout<<"balance:"<<balance<<endl;
  }
  static void displaybalance(){
    cout<<"minimum balance:"<<min_balance<<endl;
  }
};
int account:: min_balance=1000;
int main(){
    account a[5];
    for(int i=0;i<5;i++){
        a[i].getdata();
        a[i].displaydata();
    }
    account::displaybalance();
    return 0;
}