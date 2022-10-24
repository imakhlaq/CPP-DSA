#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int low, int high) {

   if (low == high) {
      return;
   }
   insertionSort(arr, low, high - 1);
   if (arr[low] > arr[high]) {
      swap(arr[low], arr[high]);
   }
}
int main() {

   int arr[] = {2, 16, 10, 14, 20, 7};
   int high = sizeof(arr) / sizeof(arr[0]);

   insertionSort(arr, 0, high - 1);

   for (int x : arr) {
      cout << x << " ";
   }

   return 0;
}