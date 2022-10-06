#include<bits/stdc++.h>
using namespace std;

   void insertionSort(int arr[],int n){

    

        for(int i=0;i<n-1;i++){
            //0 to i is sorted
            for(int j=i;j>=0;j--){

                if(arr[j+1]<arr[j]){
                    swap(arr[j+1],arr[j]);
                }
            }


        }

    }
    


int main(){


         int arr[]={2,6,10,14,20,7};
         int n=sizeof(arr)/sizeof(arr[0]);

         insertionSort(arr,n);

             for(int x:arr){
                cout<<x<<" ";
            }




        return 0;
    }