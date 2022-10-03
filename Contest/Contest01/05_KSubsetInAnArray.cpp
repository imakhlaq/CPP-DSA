#include<bits/stdc++.h>
using namespace std;
            bool checkbit(int i,int j){

                int p=i>>j;
                if(p&1){
                    return true;
                }
                return false;
            }


      //T.C = 0(2^n*n);

      //subset is you can choose any number from array any amount but you cant choose a number twice
        bool posibleKSubset(vector<int>nums,int k){
                int n=nums.size();
                //making every possible combination using truth table thig
                /*
                formula for this is 2^n
                for[1,2,4][
                   0== 0 0 0
                   1== 0 0 1
                   2== 0 1 0
                   3== 0 1 1
                   4== 1 0 0
                   5== 1 0 1
                   6== 1 1 0
                   7== 1 1 1

                ]
                considering if any number is included it will be one in truth table

                */
            for(int i=0;i<pow(2,n);i++){
                
                int sum=0;
                //iterating the truth table cand checking for included number and adding it to sum
                for(int j=0;j<nums.size();j++){

                    if(checkbit(i,j)){
                        sum+=nums[j];
                        
                        
                    }
                }
                // and in last checking if the sum ==k
                if(sum==k){
                    return true;
                }
            }
            return false;
        }



int main(){


         vector<int>nums={2,-3,6};

            int k=9;
            cout<<posibleKSubset(nums,k);
         
                



        return 0;
    }