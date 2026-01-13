//int arr[r][c]where r=row and c=column
#include<iostream>
using namespace std;
int main(){
    int arr[2][3];//decleration
    //arr[0][0]=2;//initalization
    //row constant xa ani column vary gareyxa
    //arr[0][1]=3; yeslai lai direct for loop ley initalize garna sakxa
    //arr[0][2]=4;
    //arr[1][0]=5;
    //arr[1][1]=6;
    //arr[1][2]=7;
    cout<<"enter element:";
    for(int i=0;i<2;i++){//row
        for(int j=0;j<3;j++){//column
            cin>>arr[i][j];}}

    for(int i=0;i<2;i++){//row
        for(int j=0;j<3;j++){//column
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    //for transpose
    //yesma kya xa  vanda column constant xa ani row vary gareyxa
    for(int i=0;i<3;i++){//column
        for(int j=0;j<2;j++){//row
            cout<<arr[j][i]<<" ";//arry tw sadai row ani column nai hunxa 
        }cout<<endl;
    }
        }
		
				
		

		
		
     		
		
                                     
                                
		
		
                                     
