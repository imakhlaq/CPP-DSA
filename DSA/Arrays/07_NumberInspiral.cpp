#include<bits/stdc++.h>
using namespace std;

 void generateMatrix(int n) {
        
        int arr[n][n];
        
        int top=0;
        int down=n-1;
        int right=n-1;
        int left=0;
        
        int dir=0;
        
        int num=1;
        
        
        while(top<=down && left<=right){
            
            if(dir==0){
            for(int i=left;i<=right;i++){
                arr[top][i]=num++;
            }
                top++;
            }
                
                
                else if(dir==1){
                
                    for(int j=top;j<=down;j++){
                        arr[j][right]=num++;
                    }
                    right--;
                }
                
               else if(dir==2){

                for(int i=right;i>=left;i--){
                
                    arr[down][i]=num++;
                }
                    down--;
                }
                
               else if(dir==3){

                for(int i=down;i>=top;i--){
                arr[i][left]=num++;
                }
                    left++;
                }
                
                dir=(dir+1)%4;

        
        
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }

            cout<<endl;
        }
        
        
    }
 


int main(){


        int n=3;

        generateMatrix(n);





        return 0;
    }