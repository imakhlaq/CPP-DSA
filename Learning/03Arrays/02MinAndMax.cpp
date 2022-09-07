#include<bits/stdc++.h>
using namespace std;
    


    int minOfArray(int arr[],int n){
        int min=arr[0];
        for(int i=1;i<n;i++){
            if(min>arr[i]){
                min=arr[i];

            }
        }
        return min;
    }
    int maxOfArray(int arr[],int n){
        int max=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
               
            }
        }
        return max;
    }




int main(){
           cout<<"Size of array :";
           int n;
           cin>>n;
          int arr[n];

          for(int i=0;i<n;i++){
            cout<<"enter the elements "<<i<<" : ";
            cin>>arr[i];
          }

        // int arr[]={3,2,4,653,4,};

        // int n=sizeof(arr)/sizeof(arr[0]);
      

        cout<<"Minimum of array :"<<minOfArray(arr,n)<<endl;
        cout<<"Maximum of array :"<<maxOfArray(arr,n);




        return 0;
    }