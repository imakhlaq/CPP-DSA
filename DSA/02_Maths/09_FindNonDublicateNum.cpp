

#include <bits/stdc++.h>
using namespace std;

/*
find the element in the array that does not have dublicate


xor
*/

/*
XOR property
x^x=0;
x^0=x;
*/
int nonDublicate(vector<int> vec) {

   int xorr = 0;
   // num^0=num thats why you can do this
   for (int i = 0; i < vec.size(); i++) {

      xorr = xorr ^ vec[i];
   }
   return xorr;
}

int main() {

   vector<int> vec{1, 5, 6, 1, 7, 5, 6};

   // O(n2) solution
   //  int n=nonDublicate(vec);

   int n = nonDublicate(vec);

   cout << n;

   return 0;
}