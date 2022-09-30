#include<bits/stdc++.h>
using namespace std;

     vector<int> twoUniqueNums(vector<int>nums){
        //contain zor of both unique elements
        int xorr=0;
        vector<int>ret;


        vector<int>setbit;
        vector<int>unsetbit;

        //zor of whole array every repeating element will be remoes xOrr will have both unique elemts;
        for(int i=0;i<nums.size();i++){
            xorr^=nums[i];  
        }

        //checking for first set bit because two different setbit 1^0=1 so on first setbit at both numbers bit is different are differrent (finding first setbit (1))
        int checking=xorr;
        int i=0;
        int nosetbit=0;
        while(checking!=0){

            if(checking&1){
                nosetbit=i;
                break;
                //first set bit is found
            }

            checking=checking>>1;
            i++;

        }

        //base on the fist set bit dividing array in two part (if th ith bith of an element is =1 is goes to set bit else not set bit)
        
        for(int i=0;i<nums.size();i++){
            if((1<<nosetbit)&nums[i]){
                setbit.push_back(nums[i]);
            }
            else{
               unsetbit.push_back(nums[i]); 
            }
        }


        int num1=0;
        int num2=0;

        //taking zor of setbits elements of array

        for(int i=0;i<setbit.size();i++){
            num1^=setbit[i];
            

        }

        //taking zor of unset elements of array
         for(int i=0;i<unsetbit.size();i++){
            
            num2^=unsetbit[i];

        }

      

        ret.push_back(num1);
        ret.push_back(num2);

        return ret;


     }


         vector<int> twoUniqueNums2(vector<int>nums){
        //contain zor of both unique elements
        int xorr=0;
        vector<int>ret;


        vector<int>setbit;
        vector<int>unsetbit;

        //zor of whole array every repeating element will be remoes xOrr will have both unique elemts;
        for(int i=0;i<nums.size();i++){
            xorr^=nums[i];  
        }

        //checking for first set bit because two different setbit 1^0=1 so on first setbit at both numbers bit is different are differrent (finding first setbit (1))
        int checking=xorr;
        int i=0;
        int nosetbit=0;
        while(checking!=0){

            if(checking&1){
                nosetbit=i;
                break;
                //first set bit is found
            }

            checking=checking>>1;
            i++;

        }

        //base on the fist set bit dividing array in two part (if th ith bith of an element is =1 is goes to set bit else not set bit)



        //UPDATE ==>not to use array if you zor same number it will be zero 
        // so in place of arrays we can do this we can sepecificaly take the zor of each elememt that has its bits set and for the nuber that has its bit unset


        int xor1=0;//set bit elements
        int xor2=0;//unset bits elements

        
        for(int i=0;i<nums.size();i++){
            if((1<<nosetbit)&nums[i]){

                //zor those number that has ith setbit 
                    xor1=xor1^nums[i];
            }
            else{
                //zor those number that has ith unsetbit 
               xor2=xor2^nums[i]; 
            }
        }


        

        ret.push_back(xor1);
        ret.push_back(xor2);

        return ret;


     }


int main(){


        vector<int> nums={3,6,2,9,2,6};

        vector<int> non=twoUniqueNums2(nums);



        for(int x:non){
            cout<<x<<" ";
        }




        return 0;
    }