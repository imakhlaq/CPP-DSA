#include<bits/stdc++.h>
using namespace std;

        int searchele(int arr[][3],int n){


            int i=0;
            int j=0;

            while(i<3 &&j<3){
                if((arr[i][j]+2)<n){
                    i++;
                }
                
                else if((arr[i][j]+2)>n){
                   for(int k=0;k<3;k++){
                    if(arr[i][k]==n){
                        return arr[i][k];
                    }
                    
                    
                   }
                }
            }

            return -1;
        }


int main(){


        int arr[][3]={{1,2,3},
                      {4,5,6},
                      {7,8,9}  };

        
        int n=5;

        int num=searchele(arr,n);

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<endl<<num;




        return 0;
    }