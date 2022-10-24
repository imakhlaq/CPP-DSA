#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int high) {

   if (high <= 1) {
      return;
   }
   insertionSort(arr, high - 1);

   int j = arr[high-1];

   while (j != 0) {
      if (arr[j] > arr[j + 1]) {
         swap(arr[j + 1], arr[j]);
      };
      j--;
   }
}
int main() {

   int arr[] = {32, 2, 16, 10, 14, 20, 7};
   int high = sizeof(arr) / sizeof(arr[0]);

   insertionSort(arr, high - 1);

   for (int x : arr) {
      cout << x << " ";
   }

   return 0;
}