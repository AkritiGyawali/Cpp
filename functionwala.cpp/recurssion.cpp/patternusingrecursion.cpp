#include<iostream>
using namespace std;
void pat(int n){
if(n<=0) return;
else pat(n-1);
for(int i=1;i<=n;i++){
    cout<<"* ";
}cout<<endl;


}
int main(){
    pat(7);
}