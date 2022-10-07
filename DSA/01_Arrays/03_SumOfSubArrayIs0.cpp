#include <bits/stdc++.h>
using namespace std;

bool subArraySumISZero(int prefix[], int n) {
   bool istrue = false;
   sort(prefix, prefix + n);

   for (int i = 1; i < n; i++) {
      if (prefix[i - 1] == prefix[i] || prefix[i] == 0) {
         return istrue = true;
      }
   }
   return istrue;
}

int main() {

   int arr[] = {2, 4, -3, 1, 3, -2, 1, -5, 7, 2};
   int n = sizeof(arr) / sizeof(arr[0]);

   int prefix[n] = {0};

   int p = sizeof(prefix) / sizeof(prefix[0]);
   prefix[0] = arr[0];
   for (int i = 1; i < p; i++) {
      prefix[i] = prefix[i - 1] + arr[i];
   }

   // bool isOrNot=subArraySumISZero(prefix,p);

   // cout<<isOrNot<<endl;

   for (int x : prefix) {
      cout << x << " ";
   };

   return 0;
}