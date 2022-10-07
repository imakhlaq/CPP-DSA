#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;
   cin >> n;

   vector<int> fac1;

   int i = 2;

   // i*i because if is prime number then their is no factor of it and if it is
   // its factors exist in before rootN

   // TC O(rootN+logN)~ O(rootN)

   while (i * i <= n) {
      if (n % i == 0) {
         n = n / i;
         fac1.push_back(i);
      } else {
         i++;
      }
   }
   // if the number is not reduce to 1 after goint to rootN than its prime
   // number itself
   if (n != 1) {
      fac1.push_back(n);
   }

   for (int i = 0; i < fac1.size(); i++) {
      cout << fac1[i] << " ";
   }

   return 0;
}