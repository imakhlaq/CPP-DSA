#include <bits/stdc++.h>
using namespace std;

// majore digonal sum

int majorDiagonal(vector<vector<int>> vec) {
   int sum = 0;
   for (int i = 0; i < vec.size(); i++) {
      for (int j = 0; j < vec[0].size(); j++) {
         if (i == j) {
            sum += vec[i][j];
         }
      }
   }
   return sum;
}

// minor diagonal of sum
int minorDiagonal(vector<vector<int>> vec) {
   int sum = 0;
   for (int i = 0; i < vec.size(); i++) {
      for (int j = 0; j < vec[0].size(); j++) {
         if (i + j == vec.size() - 1) {
            sum += vec[i][j];
         }
      }
   }
   return sum;
}

int main() {

   cout << "Enter the rows ans cols:";
   int row, col;
   cin >> row >> col;

   vector<vector<int>> vec;

   for (int i = 0; i < row; i++) {
      vector<int> temp;
      for (int j = 0; j < col; j++) {
         if (j == 0 && i == 0) {
            cout << "Enter element :";
         }

         int element;
         cin >> element;
         temp.push_back(element);
      }
      vec.push_back(temp);
   }

   // int sum=majorDiagonal(vec);
   int sum = minorDiagonal(vec);

   cout << "Sum is : " << sum << endl;

   // display original matrix
   for (int i = 0; i < vec.size(); i++) {
      for (int j = 0; j < vec[0].size(); j++) {
         cout << vec[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}