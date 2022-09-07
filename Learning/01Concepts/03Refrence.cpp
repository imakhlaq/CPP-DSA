#include<bits/stdc++.h>
using namespace std;

   void swapNumber(int &a,int &b){  //pasing value as refrence (address of varibles) by using & . and by default its passed by value(copy of varible)
    int temp=a;
    a=b;
    b=temp;
   }


int main(){


    int a,b;
        cout<<"Enter three value A :";
        cin>>a;
        cout<<"Enter three value B :";
        cin>>b;

        swapNumber(a,b);

        cout<<"A "<<a;
        cout<<" B "<<b;




        return 0;
    }