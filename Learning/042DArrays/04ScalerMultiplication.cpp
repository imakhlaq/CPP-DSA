#include<bits/stdc++.h>
using namespace std;

//multiplying a digit with a matrix


int main(){


        int rows;
        int cols;
        int scaler;
        cout<<"enter the rows and colums :";
        cin>>rows>>cols;
        cout<<"enter the Scaler number:";
        cin>>scaler;
        

        vector<vector<int>>vec;

        for(int i=0;i<rows;i++){
            vector<int>temp;
            for(int j=0;j<cols;j++){
                int value;
                cout<<"Enter the Value :";
                cin>>value;
                temp.push_back(value);

            }
            vec.push_back(temp);
        }

        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[0].size();j++){
                cout<<vec[i][j]*scaler<<" ";
            }
            cout<<endl;
        }
        




        return 0;
    }