#include <bits/stdc++.h>
using namespace std;

// sub array is ==> contigious part of array

void reverseTheSub(int arr[], int start, int end) {

   while (start < end) {
      swap(arr[end], arr[start]);
      start++;
      end--;
   }
}

int main() {

   int arr[] = {3, 2, 7, 9, 12, 6, 8, 4, 1};

   int start, end;
   cin >> start >> end;
   // taking input of sub array to be reverse and passing it to the function
   reverseTheSub(arr, start, end);

   for (int x : arr) {
      cout << x << " ";
   }

   return 0;
}