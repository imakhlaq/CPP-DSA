#include <bits/stdc++.h>
using namespace std;
void mergeSortedParts(int nums[], int low, int mid, int high) {

   int p1 = low;
   int p2 = mid;

   vector<int> temp;

   while (p1 < mid && p2 <= high) {
      if (nums[p1] <= nums[p2]) {
         temp.push_back(nums[p1]);
         p1++;
      } else {
         temp.push_back(nums[p2]);
         p2++;
      }
   }
   // taking care of remaing element
   while (p1 < mid) {
      temp.push_back(nums[p1]);
      p1++;
   }

   while (p2 <= high) {
      temp.push_back(nums[p2]);
      p2++;
   }

   // puttting vector back

   for (int i = low; i <= high; i++) {
      nums[i] = temp[i - low];
   }
}

void mergeSort(int nums[], int low, int high) {
   if (low == high) {
      return;
   }
   int mid = (low + high) / 2;
   // recursive call for one half
   mergeSort(nums, low, mid);
   // recursive call for onther half
   mergeSort(nums, mid + 1, high);
   // merging array
   mergeSortedParts(nums, low, mid + 1, high);
}

int main() {

   int nums[] = {1, 3, 42, 32, 4, 3, 68};
   int n = sizeof(nums) / sizeof(nums[0]);
   int low = 0;

   mergeSort(nums, low, n - 1);

   for (int i = 0; i < n; i++) {
      cout << nums[i] << " ";
   }
   return 0;
}