#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int start, int end) {

   while (start < end) {
      swap(arr[start], arr[end]);
      start++;
      end--;
   }
}
void kLeftRotation(int arr[], int n, int k) {
   rotate(arr, 0, k - 1);
   rotate(arr, k, n - 1);
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
   k = k % n;

   kLeftRotation(arr, n, k);

   for (int x : arr) {
      cout << x << " ";
   }

   // just for printing the value not returning a array

   // k=k%n;
   // for(int i=0;i<n;i++){
   //   cout<<arr[(i+k)%n];
   // }

   return 0;
}

// After every Nth(elements in array) . Array will becoome same;
// we have to perform K%N rotation.