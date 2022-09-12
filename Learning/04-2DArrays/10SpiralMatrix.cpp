#include<bits/stdc++.h>
using namespace std;

      vector<int> reverseTheMatrix(vector<vector<int>> mat){

         int top=0;
         int down=mat.size()-1;
         int left=0;
         int right=mat[0].size()-1;
            
          int dir=0;  //itrater





            while(top<=down && left<=right){

                if(dir==0){
                    for(int i=0;i<=right;i++){
                        cout<<mat[top][i];
                    }
                    top++;
                }

                if(dir==1){
                    for(int j=top;j<=down;j++){
                        cout<<mat[j][right];

                    }
                    right--;
                }

               else if(dir==2){
                    for(int k=right;k>=left;k--){
                        cout<<mat[down][k];

                    }
                    down--;
                }


                else if(dir==3){
                    for(int l=down;l<=top;l--){
                        cout<<mat[l][left];
                    }
                    left++;
                }
                 

                 dir=(dir+1)%4; 


                
            }
            
           

      }


int main(){


     
        int row;
        int col;
        cin>>row>> col;

        vector<vector<int>> mat;

        for(int i=0;i<row;i++){
            vector<int>temp;
            for(int j=0;j<col;j++){
                int el;
                cin>>el;
                temp.push_back(el);
                
            }
            mat.push_back(temp);
        }


        for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
                

            }
            cout<<endl;
        }

        cout<<endl;

            reverseTheMatrix(mat);

        return 0;
    }