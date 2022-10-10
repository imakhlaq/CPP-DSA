#include <bits/stdc++.h>
using namespace std;

/*
rearrange the given array between the index L to H
*/

void reArrangeFromLtoH(int arr[], int low, int high) {

   int p1 = low + 1;
   int p2 = high;

   while (p1 < p2) {
      if (arr[p1] < arr[low]) {
         p1++;
      } else if (arr[p2] >= arr[low]) {
         p2--;
      } else {
         swap(arr[p1], arr[p2]);
         p1++;
         p2--;
      }
   }
   swap(arr[low], arr[p1 - 1]);
}

int main() {

   int arr[] = {7, 2, 9, 4, 11, 8, 13, 4, 11, 2, 15};
   int n = sizeof(arr) / sizeof(arr[0]);
   int l = 2;
   int h = 8;

   reArrangeFromLtoH(arr, l, h);

   for (int x : arr) {
      cout << x << " ";
   }
   return 0;
}