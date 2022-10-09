#include <bits/stdc++.h>
using namespace std;

int GreatestCD(int num1, int num2) {

   if (num1 < num2) {
      swap(num1, num2);
   }

   if (num2 == 0) {
      return num1;
   }
   GreatestCD(num1 % num2, num2);
}

int main() {

   int num1;
   int num2;

   cin >> num1 >> num2;

   int n = GreatestCD(num1, num2);

   cout << n;

   return 0;
}