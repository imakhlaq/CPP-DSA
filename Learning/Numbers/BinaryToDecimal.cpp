#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
          int res=0;
          int pow=0;
        while(n!=0){
           int digit=n%10;
            if(digit==1){
              res=res+powf(2,pow);

            }
            

            n=n/10;

          pow++;

        }
        return res;
}


int main(){


       int n;
        cout<<"enter binary number : ";
        cin>>n;
         
        cout<<binaryToDecimal(n);




        return 0;
    }