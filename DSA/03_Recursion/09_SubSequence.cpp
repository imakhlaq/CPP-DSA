#include<bits/stdc++.h>
using namespace std;

// if a is sub sequence of b or not
//SubSequence means every cahr of a has to be in a sequence in b but not reccesserly contigious

        bool isSubSequence(string str1,string str2,int i=0,int j=0){

            if(i==str2.length()){
                return false;
            }

            if(str1[j]==str2[i]){
                j++;
                
                
            }
           
            if(j==str1.length()){
                    return true;
                }
            
           return isSubSequence(str1,str2,i+1,j);


        }

       


int main(){


        string str1="hata";
        string str2="ahbacta";


        bool isOr=isSubSequence(str1,str2);

         
            cout<<isOr;



        return 0;
    }