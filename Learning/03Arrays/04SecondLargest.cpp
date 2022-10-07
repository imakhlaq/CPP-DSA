#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n) {
   int second = -1;
   int largest = arr[0];
   for (int i = 0; i < n; i++) {
      if (arr[i] > largest) {
         second = largest;
         largest = arr[i];
      }
      if (second < arr[i] && arr[i] != largest) {
         second = arr[i];
      }
   }
   return second;
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

   int secondLargestElement = secondLargest(arr, n);

   cout << endl << secondLargestElement;

   return 0;
}