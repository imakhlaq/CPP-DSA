#include <bits/stdc++.h>
using namespace std;
// find 3 trees with
// p<q<r and Ap<Aq<Ar
int minimumTree(vector<int> trees, vector<int> cost) {
   int pValue = INT_MAX;
   int qValue = INT_MAX;

   for (int i = 1; i < trees.size() - 1; i++) {

      if (trees[i - 1] < trees[i] && trees[i] < trees[i + 1]) {
      }
   }
}

int main() {

   vector<int> trees = {1, 2, 4, 8, 16};

   vector<int> cost = {1, 9, 1, 1, 4};

   minimumTree(trees, cost);

   return 0;
}