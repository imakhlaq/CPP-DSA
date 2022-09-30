/*
input n lies between 1 <=n<=10000000
remove zeros
input ==> output
1          2
9          11
18         19
29         31
99         111

and its gurented n does not contain zeros
*/

// my logic is if a n+1 check if any of the digit contain O if it does then increse the value 1 to 2 if it does not contain just return n+1;



#include<bits/stdc++.h>
using namespace std;


        bool isContainZero(int n ){
            while(n>0){
                int digit =n%10;
                if(digit==0){
                    return true;
                }
                n=n/10;
            }
            return false;
        }

        int removeZero(int n){

            if(n<9){
                return n+1;
            }



            int i=1;

            while(true){

            int p=n+i;

                if(isContainZero(p)==0){
                    return p;   
                }

                i++;
                 
            }
        }

        //make the input as n+1 into string and iterate the the string and where you find 0 replace with 0;


        string stringVersion (int n){
             n=n+1;
            
               
             string s=to_string(n);  
              


             for(int i=0;i<s.length();i++){
                if(s[i]=='0'){
                    s[i]='1';
                }
             }
              return s;

        }
        




int main(){

        int n;
        cin>>n;

        int p=removeZero(n);
        //string p=stringVersion(n);
        cout<<p;


        return 0;
    }