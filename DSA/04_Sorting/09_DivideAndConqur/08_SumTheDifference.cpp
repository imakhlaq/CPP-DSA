#include <bits/stdc++.h>
using namespace std;

/*
total number of subarrays in array is n*(n+1)/2;
it is contigious

total number of subsequence in array is pow(2,n); if NOT include empty than
pow(2,n)-1 in subsquence any element can be picked from anywhere
*/
bool bitCheck(int i, int j) {
   int p = i >> j;
   if (p & 1) {
      return true;
   }
   return false;
}

int maxAndMin(int arr[], int n) {
   vector<int> max1;
   vector<int> min2;

   for (int i = 1; i < powf(2, n); i++) {
      vector<int> temp;
      for (int j = 0; j < n; j++) {
         if (bitCheck(i, j)) {
            temp.push_back(arr[j]);
         }
      }
      int mini = temp[0];
      int maxi = temp[0];
      for (int k = 1; k < temp.size(); k++) {

         if (temp[k] > maxi) {
            maxi = temp[k];
         }
         if (temp[k] < mini) {
            mini = temp[k];
         }
      }

      max1.push_back(maxi);
      min2.push_back(mini);
   }

   int ans = 0;
   for (int j = 0; j < max1.size(); j++) {
      ans += max1[j] - min2[j];
   }

   return ans;
}
// easier and optimize way is
// sort the arrya
// and run loop from 0-n-1 and use formula ans+=arr[i]*(pow(2,i)-pow(2,n-i-1));
/*
here idea is find number of times a element is bigger and number of times its
smaller and just compute it
*/

int maxAndMin2(int nums[], int n) {
   sort(nums + 0, nums + n);
   int ans = 0;
   for (int i = 0; i < n; i++) {
      ans += nums[i] * (pow(2, i) - pow(2, n - i  - 1));
   }
   return ans;
}
int main() {

   int nums[] = {5, 1, 2};

   int n = sizeof(nums) / sizeof(nums[0]);

   int ans = maxAndMin2(nums, n);
   cout << ans;

   return 0;
}