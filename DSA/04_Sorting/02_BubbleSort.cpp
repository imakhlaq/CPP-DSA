#include<bits/stdc++.h>
using namespace std;


    void bubbleSort(int arr[],int n){

        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }



int main(){


         int arr[]={3,32,4,1,4,53,6};
         int n=sizeof(arr)/sizeof(arr[0]);

         bubbleSort(arr,n);

             for(int x:arr){
                cout<<x<<" ";
            }



        return 0;
    }