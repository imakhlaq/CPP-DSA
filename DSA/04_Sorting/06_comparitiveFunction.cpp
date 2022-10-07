#include <bits/stdc++.h>
using namespace std;

bool comp(char x, char y) {
   if (x < y) {
      return true;
   }
   return false;
}

int main() {

   string str = "asbfcdfrsfg";

   sort(str.begin(), str.end(), comp);

   cout << str;

   return 0;
}