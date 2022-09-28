

#include<bits/stdc++.h>
using namespace std;

/*
find the element in the array that does not have dublicate


xor
*/



            // int nonDublicate(vector<int>vec){
            //     int num;

            //     for(int i=0;i<vec.size();i++){
            //         int j;
            //         for(j=0;j<vec.size();j++){
            //             if(i != j && vec[i] == vec[j]){          
            //             break;
            //             }
            //         }
            //           if(j==vec.size()){
            //              num=vec[i];
            //         }
            //     }

            //     return num;
            // }


/*
XOR property
x^x=0;
x^0=x;
*/
            int nonDublicate(vector<int>vec){

                    int n=vec[0];
                for(int i=1;i<vec.size();i++){

                    n=n^vec[i];
                    
                }
                return n;
            }



int main(){


    vector<int> vec {1,5,6,1,7,5,6};



    //O(n2) solution
    // int n=nonDublicate(vec);

    int n=nonDublicate(vec);

    cout<<n;

        return 0;
    }