#include<iostream>
using namespace std;
int main(){

string s;
cout<<"\nenter a string: ";
//cin>>s;yesari input ligda space paxiko print hundaina .so to remove that we use getline
getline(cin,s);
cout<<s;
}