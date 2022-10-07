#include <bits/stdc++.h>
using namespace std;

void powerOf(int n, int k = 5) {
   if (k == 1) {
      return;
   }
   powerOf(n, k = k - 1);
   int p = k << n;
   cout << p << " ";
}

int main() {

   int n = 2;

   powerOf(n);

   return 0;
}