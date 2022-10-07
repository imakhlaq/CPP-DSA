#include <bits/stdc++.h>
using namespace std;

int fibonachiNumber(int n) {
   int a = 1;
   int b = 1;
   int c;
   cout << a << " " << b << " ";
   for (int i = 2; i <= n; i++) {
      c = a + b;
      cout << c << " ";
      a = b;
      b = c;
   }
}

int main() {

   int n;
   cout << "enter the number : ";
   cin >> n;

   fibonachiNumber(n);

   return 0;
}