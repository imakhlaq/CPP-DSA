#include<bits/stdc++.h>
using namespace std;

bool  aramstrongOrNot(int n){
    int cubeofNumber=0;
    int temp=n;
    while(n>0){
        int digit=n%10;
            cubeofNumber+=powf(digit,3);


        n=n/10;
    }
    if(temp==cubeofNumber){
        return true;

    }
    else{
        return false;
    }
}


int main(){


        int n;
    cout<<"enter the number : ";
    cin>>n;
     bool res=aramstrongOrNot(n);

     if(res){
        cout<<"Armstrong";

     }
     else{
        cout<<"Not Armstrong";
     }
        



        return 0;
    }