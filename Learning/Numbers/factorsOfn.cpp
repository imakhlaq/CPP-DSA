#include <bits/stdc++.h>
using namespace std;






int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;


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

//even btter approach
int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i ==0){
            
           
            if(i!=n/i){
                count++;
                cout<<i<<" ";

            }
        }
    }
    cout<<endl<<count;



    return 0;
}