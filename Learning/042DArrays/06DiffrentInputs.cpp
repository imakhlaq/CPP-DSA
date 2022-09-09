#include<bits/stdc++.h>
using namespace std;




int main(){


      int rows;
        int cols;
        int scaler;
        cout<<"enter the rows and colums A :";
        cin>>rows>>cols;
        
        

        vector<vector<int>>vecA;

        for(int i=0;i<rows;i++){
            vector<int>temp;
            for(int j=0;j<cols;j++){
                int value;
                cout<<"Enter the Value :";
                cin>>value;
                temp.push_back(value);

            }
            vecA.push_back(temp);

        }  




        return 0;
    }