#include<bits/stdc++.h>
using namespace std;

        void selectionSort(int arr[],int n){

            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(arr[i]>arr[j]){
                        swap(arr[i],arr[j]);
                    }
                    
                }
            }


        }


int main(){


         int arr[]={3,32,4,1,4,53,6};
         int n=sizeof(arr)/sizeof(arr[0]);

         selectionSort(arr,n);

            for(int x:arr){
                cout<<x<<" ";
            }


        return 0;
    }