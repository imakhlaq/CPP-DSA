/*
fing the pair of i,j when arr[i]>arr[j] &&i<j;
*/

#include<bits/stdc++.h>
using namespace std;
//O(n*n)
  int findPairs(vector<int>vec){
    int count=0;

    for(int i=0;i<vec.size(); i++){
        for(int j=i+1;j<vec.size();j++){
         if(vec[i]>vec[j]){
            cout<<vec[i]<<vec[j];
            count++;

         }
        }
    }
    return count;
  }


int main(){


        cout<<"enter the size : ";
        int size;
        int elements;
        cin>>size;
        vector<int>vec;
        for(int i=0;i<size;i++){

            cout<<"Enter the elements :";
            cin>>elements;
            vec.push_back(elements);
            
        }
            int noOfPairs=findPairs(vec);
            cout<<endl<<noOfPairs;



        return 0;
    }