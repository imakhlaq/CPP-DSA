#include<bits/stdc++.h>
using namespace std;




int main(){



    int row;
     int colum;
     int input;

         cout<<"Enter no row : ";
        cin>>row;
        cout<<"Enter no of colums : ";
        cin>>colum;

        int arr[row][colum];

        // taking input in  array
        for(int i=0;i<row;i++){
            for(int j=0;j<colum;j++){
                cout<<"Enter the Row "<<i+1<<" Colum "<<j+1<<" value : ";
                cin>>input;
                 
                 arr[i][j]=input;
                            }
        }
         // transpose of matrix (row into colum colum into row)
        // for(int i=0;i<row;i++){
        //   for(int j=0;j<colum;j++){
        //     cout<<arr[j][i]<<" ";
        //   }
        //   cout<<endl;
        // }

          for(int i=0;i<row;i++){
            for(int j=0;j<colum;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"=========="<<endl;

        for(int i=row-1;i>=0;i--){
          for(int j=colum-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
          }
          cout<<endl;
        }




     
      





        return 0;
    }