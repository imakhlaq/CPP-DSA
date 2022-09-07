#include<bits/stdc++.h>
using namespace std;

int gcdOfTwoNumber(int num1,int num2){


    int min=  std::min(num1,num2);

    int ans=1;

    for(int i=1;i*i<=min;i++){
        if((num1%(min/i))==0 && (num2%(min/i))==0){
            return min/i;
        }
        if(num1%i==0 && num2%i==0){
            ans=i;
        }
    }
    return ans;

}


int main(){


        cout<< "Enter two number : ";
      int num1,num2;
      cin>>num1>>num2;
      int gcd= gcdOfTwoNumber(num1,num2);
      cout<<gcd;





        return 0;
    }