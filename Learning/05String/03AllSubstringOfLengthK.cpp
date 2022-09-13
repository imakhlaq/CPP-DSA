#include<bits/stdc++.h>
using namespace std;




int main(){


        string str="hello";
            int k=3;
            int n=str.length();
           for(int i=0;i<=n-k;i++){
            cout<<str.substr(i,k);
           }
       
        



        return 0;
    }