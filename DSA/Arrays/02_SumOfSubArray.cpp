#include<bits/stdc++.h>
using namespace std;


        //for n queries it will be O(q*n)

        // int sumOfSubArray(int arr[],int start,int end){
        //         int sum=0;
        //     for(int i=start;i<=end;i++){
        //         sum=sum+arr[i];
                
        //     }
        //     return sum;
        // }
        

        



int main(){


        
    //  int arr[]={3,6,12,1,2,5,7,8,9};
     //int n=sizeof(arr)/sizeof(arr[0]);



    
    int start,end;
    // while(true){
    // cin>>start>>end;

    // // int sum=sumOfSubArray(arr,start,end);

    // cout<<sum<<endl;
    // }


        //Btter aproch prefix sum array
         int arr[]={2,4,1,5,6};
     int n=sizeof(arr)/sizeof(arr[0]);
       vector<int> p;
        int sum=0;
       for(int i=0;i<n;i++){
        
        sum+=arr[i];
        p.push_back(sum);

       }
       /*

       to find sum(i,j)=p(j)-p(i-1);
       */

       for(int x:p){
        cout<<x<<" ";
       }


        return 0;
    }