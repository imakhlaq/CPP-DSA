#include <bits/stdc++.h>
using namespace std;
/* basic solution
   1=> liner search and count number of k accurance O(n)

   2=> do binary search and find the target and check its left most accorence
   and rifht most accarance

   3=> find left and right most acorance of target and do => rifht -lest +1

   */
int frequencyOfK(int arr[], int n, int k) {

   int left = 0;
   int right = 0;
   int start = 0;
   int end = n - 1;
   // finding left accorance
   while (start <= end) {
      int mid = (start + end) / 2;

      if (arr[mid] == k) {
         left = mid;
         // because we are finding left if we found one the we will keep moving
         // till we find first accorance and store in right varible . first
         // accorance will always be in end=mid-1;
         end = mid - 1;
      } else if (arr[mid] < k) {
         start = mid + 1;
      } else {
         end = mid - 1;
      }
   }
   // finding right accorance
   start = 0;
   end = n - 1;
   while (start <= end) {
      int mid = (start + end) / 2;

      if (arr[mid] == k) {
         right = mid;
         // because we are finding rigth if we found one the we will keep moving
         // till we find last accorance and store in right varible
         //. last accorance will always be in start=mid+1
         start = mid + 1;
      } else if (arr[mid] < k) {
         start = mid + 1;
      } else {
         end = mid - 1;
      }
   }
   int ans = 0;
   left || right != 0 ? ans = (left - right + 1) : ans = 0;

   return ans;
}

int main() {

   int arr[] = {-5, -5, -3, 0, 0, 1, 1, 5, 5, 5, 5, 5, 5, 8, 10, 10, 15, 15};
   int n = sizeof(arr) / sizeof(arr[0]);

   int k;
   cin >> k;

   int ans = frequencyOfK(arr, n, k);
   cout << ans;
   return 0;
}