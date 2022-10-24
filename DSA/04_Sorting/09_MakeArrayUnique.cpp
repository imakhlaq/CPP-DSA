#include <bits/stdc++.h>
using namespace std;

int makeArrayUnique(int arr[], int n) {
   // first sort the array
   sort(arr + 0, arr + n);
   // then transver the array and if you found a element which is less than
   // previous element increment it untill its bigger than previous element
   int operation = 0;
   for (int i = 1; i < n; i++) {
      //      2           2
      if (arr[i - 1] >= arr[i]) {
         while (arr[i] <= arr[i - 1]) {
            arr[i]++;
            operation++;
         }
      }
   }

   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }

   return operation;
}

int main() {

   int arr[] = {2, 3, 2, 4, 4};
   int n = sizeof(arr) / sizeof(arr[0]);

   int ans = makeArrayUnique(arr, n);
   cout << endl << ans;
   return 0;
}