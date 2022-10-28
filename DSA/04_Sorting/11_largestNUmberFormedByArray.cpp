#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {

   string s = to_string(a) + to_string(b);
   string p = to_string(b) + to_string(a);

   if (s > p) {
      return true;
   } else if (p > s) {
      return false;
   }
   return false;
}

int main() {

   vector<int> nums = {3, 30, 34, 5, 9};
   sort(nums.begin(), nums.end(), comp);

   for (int i : nums) {
      cout << i;
   }

   return 0;
}