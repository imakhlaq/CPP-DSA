#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {

   if (n <= 1) {
      return;
   }
   insertionSort(arr, n - 1);

   int last = arr[n];
   int j = n - 1;

   while (j >= 0 && arr[j] > last) {
      arr[j + 1] = arr[j];
      j--;
   }
   arr[j + 1] = last;
}
int main() {

   int arr[] = {2, 16, 10, 14, 20, 7};
   int n = sizeof(arr) / sizeof(arr[0]);

   insertionSort(arr, n - 1);

   for (int x : arr) {
      cout << x << " ";
   }

   return 0;
}