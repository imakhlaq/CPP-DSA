#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;
   cin >> n;
   int arr[n] = {0};
   int q;
   cin >> q;

   while (q != 0) {
      int start;
      int end;
      cin >> start;
      cin >> end;
      int k;
      cin >> k;
      arr[start] = arr[start] + k;
      if (end <= n - 1) {
         arr[end + 1] = arr[end + 1] - k;
      }

      q--;
   }

   int pre[n] = {0};
   pre[0] = arr[0];

   for (int i = 1; i < n; i++) {
      pre[i] = arr[i] + pre[i - 1];
   }

   for (int x : pre) {
      cout << x << " ";
   }

   return 0;
}