#include<iostream>
using namespace std;
int track = 0 ;
void selectionsort(int n,int arr[]){
    for(int i=0;i<n;i++){
        int temp=0;
       int min=arr[i];
        for(int j=i;j<n;j++){
            if(arr[i] < arr[j])
            {
                min=arr[i];
                track = j ;
                
            }
            
        }
        temp = arr[i];
        arr[i] = min;
        arr[track] = temp ;
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
    
        selectionsort(n,arr);
    
        cout<<"after sorting"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    
    }
