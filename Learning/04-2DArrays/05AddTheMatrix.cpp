#include <bits/stdc++.h>
using namespace std;
// rows and col are same

vector<vector<int>> addMatrix(vector<vector<int>> vecA,
                              vector<vector<int>> vecB) {

   vector<vector<int>> C;

   for (int i = 0; i < vecA.size(); i++) {

      vector<int> temp;

      for (int j = 0; j < vecA[0].size(); j++) {
         int c;
         c = vecA[i][j] + vecB[i][j];

         temp.push_back(c);
      }
      C.push_back(temp);
   }
   return C;
}

int main() {

   int rows;
   int cols;
   int scaler;
   cout << "enter the rows and colums A :";
   cin >> rows >> cols;

   vector<vector<int>> vecA;

   for (int i = 0; i < rows; i++) {
      vector<int> temp;
      for (int j = 0; j < cols; j++) {
         int value;
         cout << "Enter the Value :";
         cin >> value;
         temp.push_back(value);
      }
      vecA.push_back(temp);
   }

   cout << "enter the rows and colums B :";
   cin >> rows >> cols;

   vector<vector<int>> vecB;

   for (int i = 0; i < rows; i++) {
      vector<int> temp;
      for (int j = 0; j < cols; j++) {
         int value;
         cout << "Enter the Value :";
         cin >> value;
         temp.push_back(value);
      }
      vecB.push_back(temp);
   }

   vector<vector<int>> vecC = addMatrix(vecA, vecB);

   // display

   for (int i = 0; i < vecC.size(); i++) {
      for (int j = 0; j < vecC[0].size(); j++) {
         cout << vecC[i][j] << " ";
      }
      cout << endl;
   }

   return 0;
}