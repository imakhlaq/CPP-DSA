#include <bits/stdc++.h>
using namespace std;

/*
rearrange the given array between the index L to H
*/

void reArrangeFromLtoH(int arr[], int n, int l, int h) {}

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