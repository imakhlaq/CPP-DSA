#include <bits/stdc++.h>
using namespace std;

int main() {

   int a, b;
   cin >> a;
   cin >> b;

   // for sake of simplicity a is always greater
   if (a < b) {
      swap(a, b);
   }

   // faster ===========> gcd(a%b,b); a is greater b is smaller    T.C==O(log
   // min(a,b))

   while (b > 0) {
      // taking modilo of a(greater)%  b(Smaller) is will produce a small value
      int temp = a % b;
      // now to make a always great put b in a because a is smaller tha a by
      // doing a%b
      a = b;
      // putting smaller value in b
      b = temp;
   }
   cout << a;

   return 0;
}