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

            int i;
            

            for(i=n-2;i>=0;i--){
                if(arr[i]<arr[i+1]){
                    
                    break;
                    
                }
            }
            //is i value is zero the will run run it will stop when i is -1
                int j=n-1;
                while(j>i){
                    if(arr[j]>arr[i]){
                        break;
                    }
                    j--;
                }

                swap(arr[i],arr[j]);
               
            reverse1(arr,i+1,j);       
            
            
        }


int main(){


        int arr[]={ 1,2,3 };

        int n=sizeof(arr)/sizeof(arr[0]);

        nextPermituation(arr,n);

        for(int x:arr){
            cout<<x<<" ";
        }




        return 0;
    }