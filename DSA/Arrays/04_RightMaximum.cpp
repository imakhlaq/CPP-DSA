#include<bits/stdc++.h>
using namespace std;




int main(){


        
    int arr[]={4,2,9,1,8,5,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    int rightmax[n];


     rightmax[n-1]=arr[n-1];

    for(int i=n-2;i>=0;i--){
        if(rightmax[i+1]<=arr[i]){
            rightmax[i]=arr[i];
        }
        else{
           rightmax[i]=rightmax[i+1];
        }
    }

          for(int x:rightmax){
            cout<<x<<" ";
       };



        return 0;
    }