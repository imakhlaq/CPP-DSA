#include<bits/stdc++.h>
using namespace std;


int a=21;     //global vareible

int main(){

   int a=223; //local varible(can be only acessed in his scope (scope is defined by {  } opening and closing curly braces))

   {
    int a=21; //local varible

    //to acess global varible in local if they hava same name
    cout<<::a;  // :: scope resulation opreater (use to access grobal varible if local has same name as global varible)


   }



        return 0;
    }

    //local and global vrible can have same name name And if then use want to access the global varible then you have to use :: to acess global varible