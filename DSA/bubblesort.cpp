#include<iostream>
#include<algorithm>
using namespace std;
void bubblesort(int n,int arr[]){
    //int temp=0;
    for(int i=0;i<(n-1);i++){
        for(int j=0;j<(n-1-i);j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
        //     temp=arr[j+1];
        //     arr[j+1]=arr[j];
        //    arr[j]=temp;
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

        bubblesort(n,arr);

        cout<<"after sorting"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

    }