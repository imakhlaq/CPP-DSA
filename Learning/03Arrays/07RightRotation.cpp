#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int start, int end) {

   while (start < end) {
      swap(arr[start], arr[end]);
      start++;
      end--;
   }
}
void kRightRotation(int arr[], int n, int k) {
   rotate(arr, n - k, n - 1);
   rotate(arr, 0, n - 1 - k);
   rotate(arr, 0, n - 1);
}

int main() {

   cout << "Enter the Array size : ";
   int n;
   cin >> n;

   int arr[n];

   for (int i = 0; i < n; i++) {
      cout << "Enter an element " << i + 1 << " : ";
      cin >> arr[i];
   }
   cout << "K th left rotation : ";
   int k;
   cin >> k;

   kRightRotation(arr, n, k);

   for (int x : arr) {
      cout << x << " ";
   }

   return 0;
}