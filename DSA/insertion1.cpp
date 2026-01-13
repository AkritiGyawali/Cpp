#include<iostream>
using namespace std;


void insertionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(arr[i+1]<arr[j]){
                    int temp=arr[i+1];
                    int z=i+1;
                    for(int i=z;i>=j;i--){
                        arr[i]=arr[i-1];
                    }
                        arr[j]=temp;
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

    insertionsort(arr,n);

    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}