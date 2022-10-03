#include<bits/stdc++.h>
using namespace std;

        bool checkBit(int n,int ith){
            int p=n>>ith;

            if(p&1){
                return true;
            }
            return false;
        }

        int uniqueEle(vector<int>nums){


                int unique=0;
            for(int i=0;i<31;i++){

                int count=0;
                for(int j=0;j<nums.size();j++){
                    if(checkBit(nums[j],i)){
                        count++;
                    }
                }
                if(count%3==1){
                    unique |=(1<<i);
                }
            }

            return unique;

        }



int main(){

    


         vector<int>nums ={5,7,5,4,7,11,11,9,11,7,5,4,4};


         int n=uniqueEle(nums);

         cout<<n;

        return 0;
    } 