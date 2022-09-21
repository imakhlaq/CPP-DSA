#include<bits/stdc++.h>
using namespace std;



    int convert(string str){

        int num=0;
        
        int i=0;
        while(str.length()>i){

            int a=str[i];

             a=a-48;

            num=num*10+a;

            i++;
       
        }
        return num;
    }
  

int main(){


        string str="12";
        string str1="3";

        int num=convert(str);
        int num2=convert(str1);
        int mul=num*num2;
        


        stringstream s;
        s<<mul;

        string str3;

        s>>str3;
        cout<<str3;
        




        return 0;
    }