#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixMulti(vector<vector<int>> veca,
                                vector<vector<int>> vecb) {

   vector<vector<int>> ans(veca.size(), vector<int>(vecb[0].size()));
   // vector<vector<int>>ans;

   for (int i = 0; i < veca.size(); i++) {
      // vector<int> temp;
      for (int j = 0; j < veca[0].size(); j++) {
         int sum = 0;
         for (int k = 0; k < veca[0].size(); k++) {
            sum = sum + veca[i][k] * vecb[k][j];
         }
         ans[i][j] = sum;
         // temp.push_back(sum);
      }
      // ans.push_back(temp);
   }
   return ans;
}

int main() {

   int rows;
   int cols;

   cout << "enter the rows and colums for A :";
   cin >> rows >> cols;

   vector<vector<int>> veca;

   for (int i = 0; i < rows; i++) {
      vector<int> temp;
      for (int j = 0; j < cols; j++) {
         int value;
         cout << "Enter the Value :";
         cin >> value;
         temp.push_back(value);
      }
      veca.push_back(temp);
   }

   int rows2;
   int cols2;
   cout << "enter the rows and colums for B :";
   cin >> rows2 >> cols2;

   vector<vector<int>> vecb;

   for (int i = 0; i < rows2; i++) {
      vector<int> temp;
      for (int j = 0; j < cols2; j++) {
         int value;
         cout << "Enter the Value :";
         cin >> value;
         temp.push_back(value);
      }
      vecb.push_back(temp);
   }
   cout << " =======================" << endl;

   for (int i = 0; i < veca.size(); i++) {
      for (int j = 0; j < veca[0].size(); j++) {
         cout << veca[i][j] << " ";
      }
      cout << endl;
   }
   cout << " =======================" << endl;
   for (int i = 0; i < vecb.size(); i++) {
      for (int j = 0; j < vecb[0].size(); j++) {
         cout << vecb[i][j] << " ";
      }
      cout << endl;
   }

   vector<vector<int>> ans = matrixMulti(veca, vecb);

   cout << " =======================" << endl;

   for (int i = 0; i < ans.size(); i++) {
      for (int j = 0; j < ans[0].size(); j++) {
         cout << ans[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}