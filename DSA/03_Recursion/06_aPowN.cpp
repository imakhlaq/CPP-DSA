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

    
        //work for minus power also
    double myPow(double x, int n) {

        if(n==0){
            return 1;
        }
        //main recursive equation
        double p=myPow(x,n/2);

            //if the power is less than 0>
        if(n<0){
            //if even do p*p
            //if odd do p*p*1/a
            return n%2==0 ? p*p : p*p*1/x;

        }
            //if number is greater than or equal to zero
        else{
            //if even do p*p
            //if odd do p*p*a
             return n%2==0 ? p*p : x*p*p;
        }
        
    }


int main(){


        int a;
           int n;
         cin>>a>>n;

         //double p=myPow(a,n);
       int p=myPow(a,n);
        cout<<p;



        return 0;
    }