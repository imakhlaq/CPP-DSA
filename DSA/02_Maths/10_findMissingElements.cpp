#include <bits/stdc++.h>
using namespace std;

int missingNum(int arr[], int n) {

   int array = 0;
   int nNum = 0;

   for (int i = 0; i < n - 1; i++) {
      array = array ^ arr[i];
   }
   for (int i = 1; i < n + 1; i++) {
      nNum = nNum ^ i;
   }

   return (array ^ nNum);
}

int main() {

   int arr[] = {1, 2, 4, 5, 6, 3};
   int n = sizeof(arr) / sizeof(arr[0]);

   int p = missingNum(arr, n + 1);
   cout << p;

   return 0;
}