#include<bits/stdc++.h>
using namespace std;




int main(){


     int arr[]={4,2,9,1,8,5,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int leftmax[n];   


    leftmax[0]=arr[0];

    for(int i=1;i<n;i++){
        leftmax[i]=max(arr[i],arr[i-1]);
    }

      for(int x:leftmax){
            cout<<x<<" ";
       };



        return 0;
    }