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
            for(int i=0;i<pow(2,n);i++){
                
                int sum=0;
                for(int j=0;j<nums.size();j++){

                    if(checkbit(i,j)){
                        sum+=nums[j];
                        
                        
                    }
                }
               
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