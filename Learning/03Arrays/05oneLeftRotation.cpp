#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n) {

   int temp = arr[0];
   for (int i = 1; i < n; i++) {
      arr[i - 1] = arr[i];
   }
   arr[n - 1] = temp;
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

   leftRotate(arr, n);

   for (int x : arr) {
      cout << endl << x;
   }

   return 0;
}