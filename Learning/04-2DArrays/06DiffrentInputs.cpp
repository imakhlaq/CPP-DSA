#include<bits/stdc++.h>
using namespace std;




int main(){


      int rows;
        int cols;
        int scaler;
        cout<<"enter the rows and colums A :";
        cin>>rows>>cols;
        
        

        vector<vector<int>>vec;

        for(int i=0;i<rows;i++){
            vector<int>temp;
            for(int j=0;j<cols;j++){
                int value;
                
                cin>>value;
                temp.push_back(value);

            }
            vec.push_back(temp);

        }  

        //transverse by rows

        // for(int i=0;i<vec.size();i++){
        //   for(int j=0;j<vec[0].size();j++){
        //     cout<<vec[i][j]<<" ";
        //   }
        //   cout<<endl;
        // }

        //transverse by colums

        for(int i=0;i<vec[0].size();i++){

            for(int j=0;j<vec.size();j++){
                cout<<vec[j][i]<<" ";
            }
            cout<<endl;
        }

        return 0;
    }