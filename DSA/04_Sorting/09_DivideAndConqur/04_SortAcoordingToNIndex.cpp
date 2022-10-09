#include <bits/stdc++.h>
using namespace std;
/*
you have to re arrange array arr[0] should be in sorted position . All the
elements which are smaller tha left of arr[0] larger on the right side arr[0];

{10, 3, 8, 15, 6, 12, 2, 18, 7,1}
*/

void firstArrAtRightPosition(vector<int> &nums) {

   int p1 = 1;
   int p2 = nums.size() - 1;

   while (p1 < p2) {
      // checking for if p1 is satisfied (nums[p1] is smaller than num[0])
      if (nums[p1] < nums[0]) {
         p1++;
      }
      // checking for if p2 is satisfied (nums[p3] is biger or equal than
      // num[0])
      else if (nums[p2] >= nums[0]) {
         p2--;
      }
      // when both are not setisfied swap them
      else {
         swap(nums[p1], nums[p2]);
         p1++;
         p2--;
      }
   }
   // in last swap nums[0] to num[p1-1];
   swap(nums[0], nums[p1 - 1]);
}

int main() {

   vector<int> nums = {10, 3, 8, 15, 6, 12, 2, 18, 7, 1};

   firstArrAtRightPosition(nums);

   for (int x : nums) {
      cout << x << " ";
   }

   return 0;
}