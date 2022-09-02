#include<bits/stdc++.h>
using namespace std;




int main(){


        int n;
        cout<<"enter binary number : ";
        cin>>n;
         int value=0;
          int pow=0;
        while(n!=0){
            int digit= n%10;
            if(digit==1){
              value=value+powf(2,pow);

            }
            

            n=n/10;

          pow++;

        }
        cout<<value;




        return 0;
    }