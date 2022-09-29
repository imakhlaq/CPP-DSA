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


int main(){


        int n=5;


        int once=bitCount(n);

        cout<<once;




        return 0;
    }