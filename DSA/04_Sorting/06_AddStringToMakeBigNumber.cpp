#include<bits/stdc++.h>
using namespace std;


// cancotinate a string to make it lexographically largest


    bool comp(string a,string b){
        if(a<b){
            return false;
        }
        else return true;
    }



int main(){


         vector<string>str={"33","90","39"};

         sort(str.begin(),str.end(),comp);

        for(int i=0;i<str.size();i++){
            cout<<str[i];
        }


        return 0;
    }