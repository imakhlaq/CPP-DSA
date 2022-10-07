#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cout << "enter the number : ";
   cin >> n;

   // even btter approach for factor
   //  int count=0;
   //      for(int i=1;i*i<=n;i++){
   //          if(n%i ==0){
   //              count++;
   //              if(i!= n/i){
   //                  count++;
   //              }
   //          }
   //      }
   //      cout<<endl<<count;

   // factorial in while

   int count = 0;
   int i = 1;
   while (i * i <= n) {
      if (n % i == 0) {
         count++;
         if (i != n / i) {
            count++;
         }
      }
      i++;
   }
   cout << count;

   return 0;
}