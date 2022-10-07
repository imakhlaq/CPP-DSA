#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;
   cout << "enter the number : ";
   cin >> n;

   // better solution for prime
   int count = 0;
   for (int i = 1; i * i <= n; i++) {
      if (n % i == 0) {
         count++;
         if (i != n / i) {
            count++;
         }
      }
   }
   cout << count << endl;

   if (count == 2) {
      cout << "prime";

   } else {
      cout << "not prime";
   }

   return 0;
}