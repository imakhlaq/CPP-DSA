#include<bits/stdc++.h>
using namespace std;

/*
pair of sub array is when % by m is ==0;
*/

int elmentsModm0(int arr[],int n,int m){

    int count [m]={0};
    //inisilizing count array and saving count arry index as the remainder
    for(int i=0;i<n;i++){

        int rem=arr[i]%m;

        count[rem]++;
    }

    int ans=0;

    ans+=(count[0]*count[0]-1)/2;


    for(int i=1;i<=m/2;i++){
        ans+=count[i]*count[m-i];

    }
    if(m%2==0){
        ans+=(count[m/2]*count[m/2]+1)/2;


    }

    return ans;
    
}


int main(){


        int arr[]={7,2,5,4,6,3,13,26,14,18,15,30,35,10,40};


       int n=sizeof(arr)/sizeof(arr[0]);
       int m=10;

      int res=elmentsModm0(arr,n,m);

      cout<<res;
     







        return 0;
    }