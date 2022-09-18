#include<bits/stdc++.h>
using namespace std;




int main(){


        int arr[]={2,4,-3,1,3,-2,1,-5,7,2};
        int n=sizeof(arr)/sizeof(arr[0]);
        
        int prefix[n+1]={0};

        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+arr[i];

        }

        for(int x:prefix){
            cout<<x<<" ";
       };

       for(int i=0;i<n;i++){
        if(prefix[i]);
       }


        return 0;
    }   