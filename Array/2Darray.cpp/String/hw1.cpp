//input a string of length n and count all the vowel in the given string
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin.ignore();//to delet the new line created by the input buffer.yo cin rw getline sangai use garda yesto hunne ho

cin>>s;
int count =0;
for(int i=0;i<n;i++){
    if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
   { count++;}
}cout<<count;
}