#include <bits/stdc++.h>
using namespace std;

bool bitCheck(int n, int ith) {
   int p = n >> ith;
   if (p & 1) {
      return true;
   }
   return false;
}

int main() {

   int n = 4;
   int ith = 0;

   bool a = bitCheck(n, ith);

   cout << a;

   return 0;
}