#include <bits/stdc++.h>
using namespace std;

int rearrange(int arr[], int low, int high) {
   //    int i = low + 1;
   //    int j = high - 1;

   //    while (i < j) {
   //       if (arr[i] < arr[low]) {
   //          i++;
   //       } else if (arr[j] >= arr[low]) {
   //          j--;
   //       } else {
   //          swap(arr[j], arr[i]);
   //          i++;
   //          j--;
   //       }
   //    }
   //    swap(arr[low], arr[i - 1]);
   //    return i;

   int pivot = arr[high];
   int i = (low - 1);  // index of smaller element
   for (int j = low; j < high; j++) {
      // If current element is smaller than the pivot
      if (arr[j] < pivot) {
         i++;

         // swap arr[i] and arr[j]
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
      }
   }

   // swap arr[i+1] and arr[high] (or pivot)
   int temp = arr[i + 1];
   arr[i + 1] = arr[high];
   arr[high] = temp;

   return i + 1;
}
void quickSortAlgo(int arr[], int low, int high) {

   if (low >= high) {
      return;
   }
   int index = rearrange(arr, low, high);

   quickSortAlgo(arr, low, index - 1);
   quickSortAlgo(arr, index + 1, high);
}

int main() {

   int arr[] = {1, 3, 42, 32, 4, 3, 68};
   int high = sizeof(arr) / sizeof(arr[0]);
   int low = 0;
   quickSortAlgo(arr, low, high - 1);

   for (int i : arr) {
      cout << i << " ";
   }

   return 0;
}