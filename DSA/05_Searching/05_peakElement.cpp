#include <bits/stdc++.h>
using namespace std;
/*peak element is ==> arr[mid-1]<arr[mid]>arr[mid+1];
 */
int peakElement(int arr[], int n) {

   // case if array has only one element
   if (n == 1) {
      return arr[0];
   }
   // to save from segmentaion fault
   if (arr[0] > arr[1]) {
      return arr[0];
   }
   if (arr[n - 1] > arr[n - 2]) {
      return arr[n - 1];
   }

   // if re have checked for both of these case than remove them from search
   // space to save time

   int start = 1;
   int end = n - 2;

   while (start <= end) {
      int mid = start + (end - start) / 2;
      if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
         return arr[mid];
      } else if (arr[mid - 1] > arr[mid]) {
         end = mid - 1;
      } else if (arr[mid + 1] > arr[mid]) {
         start = mid + 1;
      }
   }
}
int main() {

   int arr[] = {3, 2, 1, 5, 7, 4, 8};
   int n = sizeof(arr) / sizeof(arr[0]);
   int ans = peakElement(arr, n);
   cout << ans;
   return 0;
}