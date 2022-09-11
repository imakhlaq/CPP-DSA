#include<bits/stdc++.h>
using namespace std;





 vector<vector<int>> transpose(vector<vector<int>> vec){

    //transver by colums
                 vector<vector<int>> vec;
                 for(int i=0;i<vec[0].size();i++){
                     vector<int> temp;
                     for(int j=0;j<vec.size();j++){
                        temp.push_back(vec[j][i]);
                     }
                        vec.push_back(temp);
                 }

                 return vec;

             }



int main(){



    // int row;
    //  int colum;
    //  int input;

    //      cout<<"Enter no row : ";
    //     cin>>row;
    //     cout<<"Enter no of colums : ";
    //     cin>>colum;

    //     int arr[row][colum];

        // input 
        //    for(int i=0;i<row;i++){
        //     for(int j=0;j<colum;j++){
        //         cout<<"Enter the Row "<<i+1<<" Colum "<<j+1<<" value : ";
        //         cin>>input;
                 
        //          arr[i][j]=input;
        //                     }
        // }
         // transpose of matrix (row into colum colum into row)
        // for(int i=0;i<row;i++){
        //   for(int j=0;j<colum;j++){
        //     cout<<arr[j][i]<<" ";
        //   }
        //   cout<<endl;
        // }

        //   for(int i=0;i<row;i++){
        //     for(int j=0;j<colum;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        // cout<<"=========="<<endl;

        // for(int i=row-1;i>=0;i--){
        //   for(int j=colum-1;j>=0;j--){
        //     cout<<arr[i][j]<<" ";
        //   }
        //   cout<<endl;
        // }





            //using vector for un even size of matrix




            

            vector<vector<int>> vec;
            
            int row;
            int col;
            cout<<"Row and colums :";
            cin>>row>>col;
            for(int i=0;i<row;i++){
                vector<int>temp;
                for(int j=0;j<col;j++){
                    int element;
                    cin>>element;
                    temp.push_back(element);


                }
                vec.push_back(temp);
            }


            for(int i=0;i<vec.size();i++){
                for(int j=0;j<vec[0].size();j++){
                    cout<<vec[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<"=====================";

             transpose(vec);



     
      





        return 0;
    }