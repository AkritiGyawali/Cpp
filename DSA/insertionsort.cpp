#include<iostream>
using namespace std;
void insertionsort(int n,int arr[]){
    for(int i=0;i<n;i++){
        for(int j = 0 ;j < i; j++){
            if(arr[i+1]<arr[j]){
                arr[j]=arr[i+1];
                break;//this exit the inner for loop
            }
        }
    }

}
int main(){
    int n;
    cout<<"enter any number"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" element"<<endl;
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
     cout<<"before sorting"<<endl;
    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }cout<<endl;

    insertionsort(n,arr);

    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
