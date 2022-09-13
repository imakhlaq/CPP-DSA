/*
input =111 22 33 11 2
output =31 22 23 21 12
*/


#include<bits/stdc++.h>
using namespace std;




int main(){


        string str="1112233112";
        string out="";


        int i=0;
        int count=1;
        while(str.length()-1>=i){
            
            if(str[i]==str[i+1]){

                    count++;
            }
            else{
                out=out+to_string(count)+str[i];
                count=1;
            }

            i++;
        }

        cout<<out;
     

     //if acurance in is the multiple places than run one more loop in while
     // whlile(whole string)if(str[i(i(0th index)+1]==x(digityou are searching for))



        return 0;
    }