#include<bits/stdc++.h>
using namespace std;

    int powerN(int a,int n){


        if(n==0){
            return 1;
        }
        //before you were caling function multiple time that canbe reduce just call the power function with the == power(a,n/2) and the value it gives in a varible and 
        //for odd do a*x*X -===- for even do x*x and just return it

        
        int x=powerN(a,n/2);//main formula

        if(n&1){
            //for odd
            //return a * powerN(a,n/2) * powerN(a,n/2);
            //optimize
            return a*x*x;

        }
        else{
            //for even
            //return powerN(a,n/2) * powerN(a,n/2);
            //optimize
            return x*x;
        }

    }

    int powerN1(int a,int n){


        if(n==0){
            return 1;
        }
        //before you were caling function multiple time that canbe reduce just call the power function with the == power(a,n/2) and the value it gives in a varible and 
        //for odd do a*x*X -===- for even do x*x and just return it

        
        int x=powerN(a,n/2);//main formula

            // UPDATE ===== for negative power also
            if(a<0){
              return a%2==0 ? x*x : x*x*1/a;  
            }
        if(n&1){
            //for odd
            //return a * powerN(a,n/2) * powerN(a,n/2);
            //optimize
            return a*x*x;

        }
        else{
            //for even
            //return powerN(a,n/2) * powerN(a,n/2);
            //optimize
            return x*x;
        }

    }


int main(){


         int a;
         int n;
         cin>>a>>n;

         int p=powerN(a,n);

        cout<<p;



        return 0;
    }