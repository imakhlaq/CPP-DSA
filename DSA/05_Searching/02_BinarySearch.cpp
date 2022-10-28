#include <bits/stdc++.h>
using namespace std;
/*
to use binaray search array need to be sorted
*/
string binarySearch(int arr[], int n, int target) {
   int start = 0;
   int end = n - 1;

   while (start <= end) {
      // int mid = (start + end) / 2; can cause bugs
      int mid = end + (start - end) / 2;  // more stable
      if (arr[mid] == target) {
         return "found";
      } else if (arr[mid] < target) {
         start = mid + 1;
      } else {
         end = mid - 1;
      }
   }
   return "not found";
}
int main() {

   int arr[] = {3, 6, 9, 12, 14, 19, 20, 23, 25, 27};
   int n = sizeof(arr) / sizeof(arr[0]);

   int target = 12;

   string s = binarySearch(arr, n, target);

   cout << s;

   return 0;
}