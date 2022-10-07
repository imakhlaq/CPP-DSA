#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {

   for (int i = 0; i < n - 1; i++) {
      int count = 0;  // count varible to store number of swaps
      for (int j = 0; j < n - i - 1; j++) {
         if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            count++;
         }
      }
      if (count == 0) {
         break;  // if in first iteration if their is no swaps then we can say
                 // the array is already sorted and we dont have to perform
                 // anything
      }
   }
}

int main() {

   int arr[] = {3, 32, 4, 1, 4, 53, 6};
   int n = sizeof(arr) / sizeof(arr[0]);

   bubbleSort(arr, n);

   for (int x : arr) {
      cout << x << " ";
   }

   return 0;
}