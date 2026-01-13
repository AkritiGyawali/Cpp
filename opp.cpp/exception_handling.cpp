#include<iostream>
using namespace std;
class customer{
    string name;
    int balance,acc_no;
    customer(string name,int balance,int acc_no){
        this->name=name;
        this->balance=balance;
        this->acc_no=acc_no;
    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<amount<<"is successfully deposited"<<endl;
        }
    }
    void withdraw(int amount){
        if(amount>0&&amount<balance){
            balance-=amount;
            cout<<amount<<"is successfully withdrawn"<<endl;
        }
    }
};