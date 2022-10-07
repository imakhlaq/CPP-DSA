#include <bits/stdc++.h>
using namespace std;

// transpose and reverse solution

void rotate(vector<vector<int>> &vec) {

   int n = vec.size();
   for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {

         swap(vec[j][i], vec[i][j]);
      }
   }

   for (int i = 0; i < n; i++) {
      reverse(vec[i].begin(), vec[i].end());
   }
}

// wap and layer solution
void Rotate(vector<vector<int>> &vec) {

   int n = vec.size();
   for (int i = 0; i < n / 2; i++) {
      for (int j = i; j < n - i - 1; j++) {

         int temp = vec[i][j];
         vec[i][j] = vec[n - 1 - j][i];
         vec[n - 1 - j][i] = vec[n - 1 - i][n - 1 - j];
         vec[n - 1 - i][n - 1 - j] = vec[j][n - 1 - i];
         vec[j][n - 1 - i] = temp;

         // first element vec[i][j];
         // second element vec[j][n-1-i];
         // third element  vec[n-1-i][n-1-j];
         //  fourth element vec[n-1-j][i];
      }
   }
}

int main() {

   cout << "Enter the N*N:";
   int n;
   cin >> n;

   vector<vector<int>> vec;

   for (int i = 0; i < n; i++) {
      vector<int> temp;
      for (int j = 0; j < n; j++) {
         if (j == 0 && i == 0) {

            cout << "Enter element :";
         }

         int element;
         cin >> element;
         temp.push_back(element);
      }
      vec.push_back(temp);
   }

   // display original matrix
   for (int i = 0; i < vec.size(); i++) {
      for (int j = 0; j < vec[0].size(); j++) {
         cout << vec[i][j] << " ";
      }
      cout << endl;
   }
   cout << "===============" << endl;

   // Rotate(vec);

   rotate(vec);
   cout << endl;

   for (int i = 0; i < vec.size(); i++) {
      for (int j = 0; j < vec[0].size(); j++) {
         cout << vec[i][j] << " ";
      }
      cout << endl;
   }
   cout << "===============" << endl;

   return 0;
}