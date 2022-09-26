#include<bits/stdc++.h>
using namespace std;

        int vecGCD(vector<int>vec){


            int a=vec[0];

            for(int i=1;i<vec.size();i++){

                 
            int b=vec[i];

            if(a<b){
                swap(a,b);
            }

            while(b>0){
                int temp=a%b;
                a=b;
                b=temp;
            }

            }

            //more easy
            /*
            implement gcd function

            int ans=gcd(arr[0],arr[i]);

            for(int i=2;i<n;i++){
                ans=gcd(ans,arr[i]);
            }
            */

           


           return a;
        }


int main(){


        // vector<int> vec={24,20,32,120,12};
        vector<int> vec={3,3,3,4,3};

        int n=vecGCD(vec);


        cout<<n;

        return 0;
    }