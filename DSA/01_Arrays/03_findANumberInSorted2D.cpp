#include<bits/stdc++.h>
using namespace std;

        // int searchele(int arr[][5],int n){


        //     int i=0;
        //     int j=0;

        //     while(i< &&j<3){
        //         if((arr[i][j]+2)<n){
        //             i++;
        //         }
                
        //         else if((arr[i][j]+2)>n){
        //            for(int k=0;k<3;k++){
        //             if(arr[i][k]==n){
        //                 return arr[i][k];
        //             }
                    
                    
        //            }
        //         }
        //     }

        //     return -1;
        // }    




                    bool searchEle(vector<vector<int>>nums,int target){

                        
                        
                        int i=0;
                        int j=nums[i].size()-1;

                        while(i<nums.size() && j>=0){

                            if(nums[i][j]==target){
                               return true;
                            }
                            else if (nums[i][j]>target){
                               j--;
                            }
                            else if(nums[i][j]<target){
                                i++;
                            }


                        }

                        return false;

                        
                    }


int main(){


        


        vector<vector<int>>nums={
                      {1 ,4, 7, 11,15},
                      {2 ,5, 8, 12,19},
                      {3 ,6, 9, 16,22},
                      {10,13,14,17,24},
                      {18,21,23,26,30}  };



            int target=5;


        bool isfound=searchEle(nums,target);

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                cout<<nums[i][j]<<" ";
            }
            cout<<endl;
        }


    

        cout<<endl<<isfound;




        return 0;
    }