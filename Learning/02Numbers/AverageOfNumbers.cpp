#include <bits/stdc++.h>
using namespace std;

int main() {
   cout << "Average OF :";

   int n;
   int num;
   int avg = 0;
   cin >> n;
   for (int i = 1; i <= n; i++) {

      cout << "Enter the number : " << endl;
      cin >> num;
      avg += num;
   }

   cout << avg / n;

   return 0;
}