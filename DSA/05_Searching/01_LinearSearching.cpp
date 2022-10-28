#include <bits/stdc++.h>
using namespace std;
string linearSearch(int arr[], int n, int target) {
   for (int i = 0; i < n; i++) {
      if (arr[i] == target) {
         return "found";
      }
   }
   return "not found";
}

int main() {

   int arr[] = {1, 2, 4, 5, 7, 3, 4, 12, 4, 35};
   int n = sizeof(arr) / sizeof(arr[0]);

   int target = 12;

   string ans = linearSearch(arr, n, target);
   cout << ans;

   return 0;
}