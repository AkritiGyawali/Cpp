//input even string and reverse half of the string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="akriti gyawali";
    int n=s.length();
    cout<<s<<" "<<s.length()<<endl;
    reverse(s.begin()+1,s.begin()+6);
    cout<<s<<" "<<s.length()<<endl;
}
