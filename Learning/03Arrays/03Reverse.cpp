#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n) {
   int start = 0;
   int end = n - 1;

   while (start < end) {
      swap(arr[start], arr[end]);
      start++;
      end--;
   }

   for (int i = 0; i < n; i++) {
      cout << arr[i];
   }
}

int main() {

   cout << "Size of Array :";
   int n;
   cin >> n;

   int arr[n];

   for (int i = 0; i < n; i++) {
      cout << "enter the elements " << i << " : ";
      cin >> arr[i];
   }

   reverse(arr, n);

   return 0;
}