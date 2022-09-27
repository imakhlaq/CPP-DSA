#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){

    int count =0;

        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                count++;
                if(i!=n/i){
                    count++;
                }
            }

        }
        

        if(count==2){
            return true;
        }

        return false;

}




int main(){

        int n;
        cin>>n;

      // O(N root N) approch
        // int count =0;
        // for(int i=0;i<=n;i++){
        //     if(isPrime(i)){
        //         count++;
        //     }
        // }
        // cout<<count;


        //faster approch

        //every number is prime 


        //Algo name Sieve of Eratosthenes
        // TC O(n log(log n))= o(n)
        vector<bool>prime(n+1, 1);

        //zero and 1 is not prime so we dont consider it
        prime[0]=false;
        prime[1]=false;


        for(int i=2;i*i<=n;i++){

            if(prime[i]==true){
                //is you found first number than cross every other its multiple
                // next multiple will be on i*2
                //and increse by J+i (2+2=4;4+2=6 ...etc)
                for(int j=i*i;j<=n;j=j+i){
                    prime[j]=false;
                }
            }
        }


        int count=0;

        for(int i=0;i<=n;i++){
           
            if(prime[i]==1){
                count++;
            }
        }
        cout<<endl;
        cout<<count;




        return 0;
    }