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

           


           return a;
        }


int main(){


        vector<int> vec={24,20,32,120,12};

        int n=vecGCD(vec);


        cout<<n;

        return 0;
    }