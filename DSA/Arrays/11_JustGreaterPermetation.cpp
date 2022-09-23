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

            int indexofDiff=0;

            for(int i=n-1;i>0;i--){
                if(arr[i]>arr[i-1]){
                    indexofDiff=i-1;
                    break;
                    
                }
            }

                if(indexofDiff!=0){
                    for(int i=n-1;i>=0;i--){
                if(arr[i]>arr[indexofDiff]){
                    swap(arr[i],arr[indexofDiff]);
                    
                    break;
                }
            }
                }

              
           
            int end=n-1;


            if(indexofDiff>0){
                reverse1(arr,indexofDiff+1,end);
            }
            else{
               reverse1(arr,indexofDiff,end); 
            }
            

            
            
            
            
        }


int main(){


        int arr[]={ 1,3,2 };

        int n=sizeof(arr)/sizeof(arr[0]);

        nextPermituation(arr,n);

        for(int x:arr){
            cout<<x<<" ";
        }




        return 0;
    }