#include<bits/stdc++.h>
using namespace std;

    bool isPalindrom(string str,int start,int end){

        if(start>=end){
            return true;
        }

        if(str[start]!=str[end-1]){
            return false;
        }
       
       return isPalindrom(str,start+1,end-1);



    }

        //If only string input is given in function . then create a function by yourserlf and return its value.


        //AND ALWAYS PASS STRING BY REFRENCE
int main(){


         string str="mom" ;
         //cin>>str;

         cout<<isPalindrom(str,0,str.length());




        return 0;
    }