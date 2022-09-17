#include<bits/stdc++.h>
using namespace std;

        int sumOfSubArray(int arr[],int start,int end){
                int sum=0;
            for(int i=start;i<=end;i++){
                sum=sum+arr[i];
                
            }
            return sum;
        }


int main(){


        
     int arr[]={3,6,12,1,2,5,7,8,9};



    
    int start,end;
    while(true){
    cin>>start>>end;

    int sum=sumOfSubArray(arr,start,end);

    cout<<sum<<endl;
    }


        return 0;
    }