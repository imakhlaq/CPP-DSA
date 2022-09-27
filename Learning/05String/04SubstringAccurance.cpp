#include<bits/stdc++.h>
using namespace std;




int main(){


        string str1="hellohellohello";
        
        string str2="hello";
            int count=0;
         int n=str1.length();
         int k=str2.length();
           for(int i=0;i<=n-k;i++){

            if(str1.substr(i,k)==str2){
                count++;
            }
            
           }

            cout<<count;






        return 0;
    }