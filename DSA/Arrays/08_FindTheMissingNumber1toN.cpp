#include<bits/stdc++.h>
using namespace std;




int main(){

            int p=6;
        int ar[p]={1,2,6,5,3};

        /*
        to find the missing number find the sum of n( all element in that array including missing m`nymber) natural numbers - sum of array
        */

       int n=p*(p+1)/2;

       int sum=0;

       for(int i=0;i<p;i++){
        sum=sum+ar[i];
       }
       cout<<n-sum;





        return 0;
    }