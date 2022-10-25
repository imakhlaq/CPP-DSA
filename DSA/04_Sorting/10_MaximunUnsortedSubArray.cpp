#include <bits/stdc++.h>
using namespace std;

/*
in array find and sub array if we sort that array then our array is sorted
*/

void minsubArrayToSort(int arr[], int n) {

   int l = 1;
   int r = n - 1 - 1;  // extra -1 for while loop conditon

   while (l < n && arr[l] >= arr[l - 1]) {
      l++;
   }

   while (r >= 0 && arr[r - 1] >= arr[r]) {
      r--;
   }

   int maxremaing = INT_MIN;
   int minremaing = INT_MAX;

   for (int i = l; i <= r; i++) {
      maxremaing = max(maxremaing, arr[i]);
      minremaing = min(minremaing, arr[i]);
   }

   int i = 0;

   while (i <= l && arr[i] <= minremaing) {
      i++;
   }
   int j = n - 1;
   while (j >= r && arr[j] <= maxremaing) {
      j--;
   }

   cout << i << " to " << j;
}

int main() {

   int arr[] = {1, 2, 3, 5, 6, 13, 15, 16, 17, 13, 13, 15, 17, 17, 17};
   int n = sizeof(arr) / sizeof(arr[0]);

   minsubArrayToSort(arr, n);

   return 0;
}