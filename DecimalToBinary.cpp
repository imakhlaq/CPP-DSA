#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
         double res=0;
         int pow=0;
        while(n!=0){
            int digit=n%2;
          res=res+(digit*powf(10,pow));
          n=n/2;
          pow++;
        }
        return res;
}


int main(){


      double n;
    cout<<"enter the Decimal number : ";
    cin>>n;
        
        cout<<decimalToBinary(n);




        return 0;
    }