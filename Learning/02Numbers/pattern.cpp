#include<bits/stdc++.h>
using namespace std;




int main(){
    

    int n;
    cout<<"enter the number : ";
    cin>>n;
// 1
// 12
// 123
// 1234
// 12345
//nested loop
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }





// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
    // for(int i=0;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }







// 1 2 3 4 5 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
        // for(int i=1;i<=n*2;i++){
        //     if(i<=n){
        //         //reverse
        //         for(int j=1;j<=n-i+1;j++){
        //             cout<<j<<" ";
        //         }
        //     }
        //      else{
        //         //not reverse
        //         for(int k=1;k<=i-n;k++){
        //             cout<<k<<" ";
        //         }
        //     }
           
        //     cout<<endl;
        // }






//  * * * * * * *
//  *         *
//  *       *
//  *     *
//  *   *
//  * *
//  *

        //  for(int i=1;i<=n;i++){
        //     for(int j=1;j<=n-i+1;j++){

        //      if(j==1 || i==1 || j==n-i+1){
        //             cout<<" *";
        //      }

                

        //         else{
        //         cout<<"  ";
        //     }
        //     }
            
        //     cout<<endl;
        //  }

 
           int y=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" 0";
            }
            for(int p=1;p<=y;p++){
                    cout<<" "<<(n-i+1)*p;
            }
                     y=y+2;
            for(int k=1;k<=n-i;k++){
                cout<<" 0";
            }
           

            cout<<endl;
        }
      
     
      

        return 0;
    }