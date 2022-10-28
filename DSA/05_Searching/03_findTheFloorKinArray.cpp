#include <bits/stdc++.h>
using namespace std;
/*floor means fing a value for k which is <=k*/
void find1floor(int arr[], int n, int target) {
   int ans = INT_MIN;

   for (int i = 0; i < n; i++) {
      if (arr[i] <= target) {
         ans = arr[i];
      }
   }
   cout << ans;
}

// multiple quries
int findMultiQueries(int arr[], int n, int target) {
   int start = 0;
   int end = n - 1;
   int ans = INT_MIN;
   // sort the array
   sort(arr + 0, arr + n);
   // and the binary search in it
   while (start <= end) {
      int mid = (start + end) / 2;
      if (arr[mid] <= target) {
         ans = arr[mid];
         start = mid + 1;

      } else {
         end = mid - 1;
      }
   }
   return ans;
}

int main() {

   int arr[] = {6, 2, 3, -5, 10, 18, 9, 11, 14};
   int n = sizeof(arr) / sizeof(arr[0]);

   int target = 12;
   // if querry is one o(n) but if their are multiple queries than it goes to
   // o(q*n) kind a n^2;
   // find1floor(arr, n, target);

   // for mutliple quries apply sorting and use binary search which taked logn
   // the final complexicity will be O9(q*nlogn+logn) ==>n log n for sorting
   // it could also happens that the given array is sorted
   int q = 4;
   while (q > 0) {
      cin >> target;
      cout << findMultiQueries(arr, n, target) << endl;
      q++;
   }
   return 0;
}