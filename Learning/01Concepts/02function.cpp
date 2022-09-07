#include<bits/stdc++.h>
using namespace std;

   int multi(int a,int b,int c){  //returntype functionName(formal parameter)paramets must match the actual parameter data type, and they must be in order in as they are passed in actual parameter
    int mul=a*b*c;
    return mul;     //function body
   }


int main(){


        
        int a,b,c;
        cout<<"enter three value";
        cin>>a>>b>>c;
        int mul=multi(a,b,c);// calling of function (and passing actual parameter) and its storing the value in mul varible
        cout<<mul;



        return 0;
    }