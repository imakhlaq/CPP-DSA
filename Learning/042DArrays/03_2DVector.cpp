#include<bits/stdc++.h>
using namespace std;




int main(){


        vector<vector<int>> vec;

        int rows;
        int colums;
       
        cout<<" Enter rows  :";
        cin>>rows;
        cout<<" Enter Coloms :";
        cin>>colums;

        for(int i=0;i<rows;i++){

            vector<int> temp;// creating a row vector

            for(int j=0;j<colums;j++){
                    cout<<"Element :";
                     int elements;
                    cin>>elements;
                    temp.push_back(elements);//pushing value into row vector
            }

            vec.push_back(temp);//inserting a verctor(row vector) into main vector
        }

            //printing the the vector

            for(int i=0;i<vec.size();i++){
                for(int j=0;j<vec[0].size();j++){
                    cout<<vec[i][j]<<" ";
                }
                cout<<endl;
            }

        return 0;
    }