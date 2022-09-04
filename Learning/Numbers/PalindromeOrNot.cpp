#include<bits/stdc++.h>
using namespace std;




int main(){

    int n;
    cout<<"enter the number : ";
    cin>>n;
    int check=n;

    int rev=0;
    while(n>0){
        int digit=n%10;
        //rev formula
        rev=rev*10+digit;
        n=n/10;

    }
     cout<<rev<<endl<<check<<endl;
        if(rev==check){
            cout<<"palindrome";
        }
        else{
            cout<<"not palindrome";
        }




        return 0;
    }