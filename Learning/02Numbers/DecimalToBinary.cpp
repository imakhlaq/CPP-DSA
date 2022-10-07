#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n) {
   int res = 0;
   int pow = 0;
   while (n != 0) {
      int digit = n % 2;
      res = res + (digit * powf(10, pow));
      n = n / 2;
      pow++;
   }
   return res;
}

int main() {

   int n;
   cout << "enter the Decimal number : ";
   cin >> n;

   cout << decimalToBinary(n);

   return 0;
}