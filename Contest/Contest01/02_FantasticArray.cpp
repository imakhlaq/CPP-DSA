#include <bits/stdc++.h>
using namespace std;

int noOfsteps(vector<int> nums) {

   int n = nums.size();
   int count = -1;

   int coun[n] = {0};

   for (int i = 0; i < n; i++) {
      // do num%4 to check how much they have extra
      nums[i] = nums[i] % 4;

      coun[nums[i]]++;
      cout << coun[i] << " ";
   }

   // do 4%num to check how much the remaing need to full fill and it will be 4;
}

int main() {

   vector<int> nums = {5, 7, 8, 8, 6, 6};

   int n = noOfsteps(nums);

   return 0;
}