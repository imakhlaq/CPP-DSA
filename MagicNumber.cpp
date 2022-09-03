#include<bits/stdc++.h>
using namespace std;

   int sumOfDigit(int n){
    int sum=0;
    while(n>0){
        
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    } 
    return sum;
        
   }


int main(){


    int n;
    cout<<"enter the number : ";
    cin>>n;
     

    

    while(n>9){
        n=sumOfDigit(n);

    }

    cout<<n<<endl;

    if(n==1){
        cout<<"Magic numer";

    }
    else{
        cout<<"Not Magic Number";
    }



        return 0;
    }