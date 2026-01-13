//array is the collection of similar data or character or floating point or soon

#include<iostream>
using namespace std;
int main(){
    int x[5];//decleration
    cout<<"enter the array element: ";
    for(int i=0;i<=4;i++){
        cin>>x[i];
    }
     //x[0]=5;//initalizing
     //x[1]=4;
     //x[2]=3;
     //x[3]=2;
     //x[4]=1;
     //hamley output ko repetition lai loop mw garna sakxau so....
   // cout<<x[0]<<" ";
    //cout<<x[1]<<" ";
    //cout<<x[2]<<" ";
    //cout<<x[3]<<" ";
    //cout<<x[4]<<" ";
    for(int i=0;i<=4;i++){
        cout<<x[i]<<" ";
    }
    //feri kunai element ko value change garna ni sakinxa like;
    x[0]=100;//updating the element
    cout<<endl;
for(int i=0;i<=4;i++){
        cout<<x[i]<<" ";
        
    }
}
