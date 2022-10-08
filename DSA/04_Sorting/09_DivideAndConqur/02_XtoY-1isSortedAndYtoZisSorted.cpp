#include <bits/stdc++.h>
using namespace std;

// A array is sorted to x-->Y-1-->_->Y-->z
// and you have to sort these indexes only not whole array X--Y-1 and Y--Z sort
// these indesxes;

void sortNotSortedElement(vector<int> &nums, int x, int y, int z) {

   int p1 = x;
   int p2 = y;

   vector<int> temp;

   while (p1 < y && p2 <= z) {

      if (nums[p1] <= nums[p2]) {
         temp.push_back(nums[p1]);
         p1++;

      }

      else {
         temp.push_back(nums[p2]);
         p2++;
      }
   }

   // taking care of remainig element of array that are reft after one is
   // completed

   while (p1 < y) {
      temp.push_back(nums[p1]);
      p1++;
   }
   while (p2 <= z) {
      temp.push_back(nums[p2]);
      p2++;
   }

   // upadating original array

   for (int i = x; i <= z; i++) {
      nums[i] = temp[i - 2];
   }
}

int main() {

   vector<int> nums = {8, 1, 3, 6, 11, 2, 4, 9, 7, 6};

   int x = 2;
   int y = 5;
   int z = 7;

   sortNotSortedElement(nums, x, y, z);

   for (int x : nums) {
      cout << x << " ";
   }

   return 0;
}