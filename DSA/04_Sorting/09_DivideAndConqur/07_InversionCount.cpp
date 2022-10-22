#include <bits/stdc++.h>
using namespace std;
int mergeArrays(int arr[], int low, int mid, int high) {}

void inversion(int arr[], int low, int high) {

   if (low == high) {
      return;
   }
   int mid = (low + high) / 2;
   inversion(arr, low, mid);
   inversion(arr, mid + 1, high);

   mergeArrays(arr, low, mid, high);
}
int main() {

   int nums[] = {4, 1, 3, 9, 7};
   int n = sizeof(nums) / sizeof(nums[0]);
   int low = 0;

   inversion(nums, low, n - 1);

   return 0;
}