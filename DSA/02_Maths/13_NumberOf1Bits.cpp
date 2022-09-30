#include<bits/stdc++.h>
using namespace std;

    int bitCount(int n){

        int count=0;

        for(int i=0;i<32;i++){

            int p=1<<i;
            if(n&p){
                count++;
            }
        }

        return count;
    }

    int bitCount2(int n){
        int count=0;

        while(n!=0){
            
            
             if(n&1){
            count++;
             } 
                
                 
            n=n>>1;
        }
        return count;
    }
        //every time unsetting a set bit
        //TC(no of set bits)
    int bitCount3(int n){
        int count=0;

        while(n!=0){

             n=n&(n-1);
             count++;
        }
        return count;
    }


int main(){


        int n=5;


        int once=bitCount3(n);

        cout<<once;




        return 0;
    }