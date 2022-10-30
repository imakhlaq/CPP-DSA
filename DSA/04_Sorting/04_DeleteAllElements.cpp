#include <bits/stdc++.h>
using namespace std;

/*
Q ==delete every elememt from the array and find mim cost ==cost= sum of
remaining elementa in the arary

oberservation
= biggest element incease the sum of the array by alot then remove that element
first then next greatest and so on ...... in last remove smallest element

1=first sort the array in increasing order and


2=then make prefix sum array of that( for max postfix sum array) and add evey
    elemement of prefix sum array
*/

void insertionSort(int arr[], int n) {

      for (int i = 0; i < n - 1; i++) {
      for (int j = i; j >= 0; j--) {
         if (arr[j + 1] < arr[j]) swap(arr[j + 1], arr[j]);
      }
   }
}

int minCost(int arr[], int n) {

   int prefixp[n];
   prefixp[0] = arr[0];

   for (int i = 1; i < n; i++) {
      prefixp[i] = prefixp[i - 1] + arr[i];
   }

   // and you have to remove every element so starting from the back add all
   // prefix summ array
   int ret = 0;
   for (int i = 1; i <= n; i++) {
      ret += prefixp[n - i];
   }

   return ret;
}

int main() {

   int arr[] = {2, 4, 6, 5};
   int n = sizeof(arr) / sizeof(arr[0]);

   // sorting the array

   insertionSort(arr, n);

   // min cost finding

   int c = minCost(arr, n);

   cout << c;

   return 0;
}