#include<bits/stdc++.h>
using namespace std;

/*
card problem u can only pick card from from front or end or combination of these
*/


int main(){


        int arr[]={1,2,3,4,5,6,1};

        int n=sizeof(arr)/sizeof(arr[0]);
        int b=3;

        int max1=0;
        int sum=0;

        

       for(int i=0;i<b;i++){
        sum+=arr[i];
       }
       max1=sum;


       int j=n-1;

       for(int i=b-1;i>=0;i--){
        sum=sum+arr[j]-arr[i];
        max1=max(sum,max1);
        j--;
       };


        cout<<max1;
        
            

            
            
      


        return 0;
    }

