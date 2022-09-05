#include<bits/stdc++.h>
using namespace std;


int TrailingZerosInFactorial(int num){
    int zeros=0;
    while(num>0){
        zeros=zeros+num/5;
        num=num/5;

    }
    
    return zeros;
}

int main(){

      int num;
        cout<<"Enter a number :";
        cin>>num;
        int numberOfZeros=TrailingZerosInFactorial(num);
        cout<<numberOfZeros;


        return 0;
    }