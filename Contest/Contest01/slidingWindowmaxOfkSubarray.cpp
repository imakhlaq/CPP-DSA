#include <bits/stdc++.h>
using namespace std;
int maxofarr(vector<int> sub) {

   int max1 = INT_MIN;

   for (int a : sub) {

      max1 = max(max1, a);

      cout << a << " ";
   }
   cout << endl;

   return max1;
}

vector<int> maxSlidingWindow(vector<int>& nums, int k) {

   vector<int> window;

   int j = 0;
   int i = 0;

   int forsub = 0;

   vector<int> sub(k);
   while (j < nums.size()) {

      sub[forsub] = nums[j];
      forsub++;

      if (j - i + 1 < k) {

         j++;
      } else if (j - i + 1 == k) {

         window.push_back(maxofarr(sub));
         ++i;
         j = i;

         forsub = 0;
      }
   }
   return window;
}

int main() {

   vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};

   int k = 3;

   vector<int> num = maxSlidingWindow(nums, k);

   return 0;
}