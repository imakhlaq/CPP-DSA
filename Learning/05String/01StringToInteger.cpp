#include<bits/stdc++.h>
using namespace std;

int sToInt(char ch[]){
     int num=0;
     int i=0;
    while(ch[i]!='\0'){
        int a=ch[i];

        /*
        because ASCII value of 0=48 ,1=49,2=50..........;
        and if you directly put the value in integer you wil get ASCII value of that number and you have to do (ASCII value - 48)
        */
        a=a-48;
        num=num*10+a;

        i++;
    }
    return num;
}


int main(){


        char ch[]="12232213";
        

        int n=sToInt(ch);
        cout<<n;




        return 0;
    }