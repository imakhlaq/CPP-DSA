

#include<bits/stdc++.h>
using namespace std;

/*
find the element in the array that does not have dublicate


xor
*/



            int nonDublicate(vector<int>vec){
                int num;

                for(int i=0;i<vec.size();i++){
                    for(int j=0;j<vec.size();j++){
                        if(i != j && vec[i] == vec[j]){
                            num=vec[i];

                        }
                    }
                }

                return num;
            }



int main(){


    vector<int> vec {1,5,6,1,7,5,6};

    int n=nonDublicate(vec);

    cout<<n;

        return 0;
    }