#include <bits/stdc++.h>
using namespace std;






int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;

//===============for factor
// only checking for n/2 because numbers only corres in n/2
//and for n th factor taking count =1
// int count=1;
//     for(int i=1;i<n/2;i++){
//         if(n%i ==0){
//             count ++;
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl<<count;

//even btter approach for factor
// int count=0;
//     for(int i=1;i*i<=n;i++){
//         if(n%i ==0){
//             count++;
//             if(i!= n/i){
//                 count++;
//             }
//         }
//     }
//     cout<<endl<<count;

//================ prime or not
// for(int i=2;i<n;i++){
//     if(n%i==0 ){
//         cout<<"not prime";
//         break;
//     }
// }
//     cout<<"prime";

// better solution for prime
// int count=0;
// for(int i=1;i*i<=n;i++){
//     if(i%n==0){

//         count++;

//     }
//     if(i != n/i){
//         count++;
//     }

// }
// if(count==2){
//     cout<<"prime";

// }
// else{
//     cout<<"not prime";
// }


    return 0;
}