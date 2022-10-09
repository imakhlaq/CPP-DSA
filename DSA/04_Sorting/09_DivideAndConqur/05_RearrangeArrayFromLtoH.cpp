#include <bits/stdc++.h>
using namespace std;

/*
rearrange the given array between the index L to H
*/

void reArrangeFromLtoH(int arr[], int n, int l, int h) {

   int p1 = l + 1;
   int p2 = h - 1;

   while (p1 < p2) {
      if (arr[p1] < arr[l]) {
         p1++;
      } else if (arr[p2] >= arr[l]) {
         p2--;
      } else {
         swap(arr[p1], arr[p2]);
      }
   }
}

int main() {

   int arr[] = {7, 2, 9, 4, 11, 8, 13, 4, 11, 2, 15};
   int n = sizeof(arr) / sizeof(arr[0]);
   int l = 2;
   int h = 8;

   reArrangeFromLtoH(arr, n, l, h);

   for (int x : arr) {
      cout << x << " ";
   }
   return 0;
}