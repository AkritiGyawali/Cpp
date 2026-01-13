#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;

    try{
        if (b==0)
        throw(c);
        else
        c=a/b;
    cout<<c<<endl;
    }
    
    catch(char c){
        cout<<"caught exception:character type"<<endl;
    }
  //  catch(int c){
    //    cout<<"caught exception:integer type"<<endl;
    //}
}