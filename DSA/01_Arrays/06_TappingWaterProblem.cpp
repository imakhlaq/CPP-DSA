#include <bits/stdc++.h>
using namespace std;

int toTotalWater(int arr[], int n) {
   int left[n];
   left[0] = arr[0];

   int right[n];
   right[n - 1] = arr[n - 1];

   int water[n];

   for (int i = 1; i < n; i++) {
      left[i] = max(arr[i], left[i - 1]);
   }

   for (int i = n - 2; i >= 0; i--) {
      right[i] = max(arr[i], right[i + 1]);
   }

   // for(int x:left){
   //         cout<<x<<" ";
   //    };

   //    cout<<endl;
   //    for(int x:right){
   //         cout<<x<<" ";
   //    };

   for (int i = 0; i < n; i++) {
      water[i] = min(left[i], right[i]) - arr[i];
   }

   cout << endl;
   for (int x : water) {
      cout << x << " ";
   };

   int sum = 0;
   for (int i = 0; i < n; i++) {
      sum += water[i];
   }
   return sum;
}
int main() {

   int arr[] = {4, 2, 5, 7, 4, 2, 3, 6, 8, 2, 3};
   int n = sizeof(arr) / sizeof(arr[0]);

   int t = toTotalWater(arr, n);

   cout << t;

   return 0;
}