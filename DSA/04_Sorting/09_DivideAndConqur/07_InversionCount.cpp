#include <bits/stdc++.h>
using namespace std;
int mergeArrays(int arr[], int low, int mid, int high) {
   int p1 = low;
   int p2 = mid;
   vector<int> temp;
   while (p1 < mid && p2 <= high) {
      if (arr[p1] <= arr[p2]) {
         temp.push_back(arr[p1]);
         p1++;
      } else {
         temp.push_back(arr[p2]);
         p2++;
      }
   }
   while (p1 < mid) {
      temp.push_back(arr[p1]);
      p1++;
   }
   while (p2 <= high) {
      temp.push_back(arr[p2]);
      p2++;
   }
}

int inversion(int arr[], int low, int high) {

   if (low == high) {
      return 0;
   }
   int mid = (low + high) / 2;
   // in x and y calculating the inversion count in divided arrays
   int x = inversion(arr, low, mid);
   int y = inversion(arr, mid + 1, high);
   // and in z calculating both the after combining
   int z = mergeArrays(arr, low, mid + 1, high);

   return x + y + z;
}
int main() {

   int nums[] = {4, 1, 3, 9, 7};
   int n = sizeof(nums) / sizeof(nums[0]);
   int low = 0;

   inversion(nums, low, n - 1);

   return 0;
}