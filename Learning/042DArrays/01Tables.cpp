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

        
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<colum;j++){
        //         cout<<"Enter the Row "<<i+1<<" Colum "<<j+1<<" value : ";
        //         cin>>input;
                 
        //          arr[i][j]=input;
        //                     }
        // }

        // for(int i=0;i<row;i++){
        //     for(int j=0;j<colum;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        //}




      //table using 2D array
      for(int i=0;i<row;i++){
        for(int j=0;j<colum;j++){
            arr[i][j]=(i+1)*(j+1);
        }
      }
      // printing the 2D array
      for(int i=0;i<row;i++){
            for(int j=0;j<colum;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }



        return 0;
    }