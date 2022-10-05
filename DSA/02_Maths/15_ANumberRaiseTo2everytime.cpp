#include<bits/stdc++.h>
using namespace std;

     void power(int n,int i=5){

        if(i<0){
            return ;
        }
        int p=n<<i;
        power(n,i-1);
        
        cout<<p<<" ";

    }

        /*
        enter 2
        2*2
        2*2*2
        2*2*2*2
        2*2*2*2*2
        */

int main(){


         int n;
         cin>>n;

         power(n);




        return 0;
    }