#include <bits/stdc++.h>
using namespace std;

vector<int> mergeArray(int arr1[], int n1, int arr2[], int n2) {

   vector<int> ans;

   int i = 0;
   int j = 0;

   while (i < n1 && j < n2) {
      // cehking for if first array 0th element is samller than till
      if (arr1[i] <= arr2[j]) {
         ans.push_back(arr1[i]);
         i++;
      }
      // cehking for if Second array 0th element is samller than till
      if (arr1[i] > arr2[j]) {
         ans.push_back(arr2[j]);
         j++;
      }
   }
   // taking care of remainig element of array that are reft after one is
   // completed
   while (i < n1) {
      ans.push_back(arr1[i]);
      i++;
   }
   while (j < n2) {
      ans.push_back(arr2[j]);
      j++;
   }

   return ans;
}

int main() {

   int arr1[] = {2, 5, 7, 12, 20, 24, 29};
   int arr2[] = {45, 54};

   int n1 = sizeof(arr1) / sizeof(arr1[0]);
   int n2 = sizeof(arr2) / sizeof(arr2[0]);

   vector<int> ans = mergeArray(arr1, n1, arr2, n2);

   for (int i = 0; i < ans.size(); i++) {
      cout << ans[i] << " ";
   }

   return 0;
}