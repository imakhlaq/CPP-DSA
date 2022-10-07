#include <bits/stdc++.h>
using namespace std;

int main() {

   int p = 6;
   int arr[p] = {1, 2, 6, 6, 5, 4};

   int missingNum;
   int dublicate;

   for (int i = 0; i < p; i++) {

      if (arr[abs(arr[i]) - 1] < 0) {
         dublicate = arr[i];
      } else {
         arr[abs(arr[i]) - 1] = -1 * arr[abs(arr[i]) - 1];
      }
   }

   for (int i = 0; i < p; i++) {
      if (arr[i] > 0) {
         missingNum = i + 1;
      }
   }

   for (int x : arr) {
      cout << x << " ";
   }
   cout << endl;

   cout << dublicate << endl;
   cout << missingNum;

   return 0;
}