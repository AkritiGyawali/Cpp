#include<iostream>
#include<algorithm>
using namespace std;
void bubblesort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n-1;j++){
            if(arr[j+1]<arr[min]){
                min=j+1;
            }
        }
        swap(arr[i],arr[min]);
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