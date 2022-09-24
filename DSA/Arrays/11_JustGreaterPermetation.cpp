#include<bits/stdc++.h>
using namespace std;



        void reverse1(int arr[],int start,int end){

            while(start<end){
                swap(arr[end],arr[start]);
                start++;
                end--;
            }
        }

        void nextPermituation(int arr[] ,int n){

            // int i;
            

            // for(i=n-2;i>=0;i--){
            //     if(arr[i]<arr[i+1]){
                    
            //         break;
                    
            //     }
            // }
            // //is i value is zero the will run run it will stop when i is -1
            //     int j=n-1;
            //     while(j>i){
            //         if(arr[j]>arr[i]){
            //             break;
            //         }
            //         j--;
            //     }

            //     swap(arr[i],arr[j]);
            //     cout<<i;
               
            // reverse1(arr,i+1,j);       
            
             int i;
        
        for(i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                break;

            }

        }
        
               
              int j=n-1;
                if(i>=0){
            
            while(j>i){
                if(arr[j]>arr[i]){
                    break;

                }
                j--;

            }
            
            swap(arr[i],arr[j]);
            
            }


            for(int i=0;i<n;i++){
                cout<<arr[i];
            }
            cout<<endl;

        
        
        if(i>=0){
        reverse(arr+i+1,arr+n);
        }
        
        else{
            
            reverse1(arr, i+1,n-1);
        }
        }


int main(){


        int arr[]={ 2,3,1 };

        int n=sizeof(arr)/sizeof(arr[0]);

        nextPermituation(arr,n);

        for(int x:arr){
            cout<<x<<" ";
        }




        return 0;
    }