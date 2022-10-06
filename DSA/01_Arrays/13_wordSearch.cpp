#include<bits/stdc++.h>
using namespace std;

    bool exist(vector<vector<char>>& board, string word) {


        int count=0;


                for(int i=0;i<board.size();i++){
                    for(int j=0;j<board[0].size();j++){
                        if(board[i][j]==word[count]){
                            count++;
                        }
                    }
                }
            
                cout<<count;
            if(count>=word.length()){
                return true;
            }
            return false;


        
    }


int main(){



    vector<vector<char>> board {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
        };
    
        string word ="ABCB";
        int p=exist( board, word);
    
            cout<<p;

 


        return 0;
    }