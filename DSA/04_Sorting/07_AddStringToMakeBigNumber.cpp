#include <bits/stdc++.h>
using namespace std;

// cancotinate a string to make it lexographically largest

bool comp(string a, string b) {
   if (a + b > b + a) {
      return true;
   } else
      return false;
}

int main() {

   vector<string> str = {"9", "90", "908"};

   sort(str.begin(), str.end(), comp);

   for (int i = 0; i < str.size(); i++) {
      cout << str[i];
   }

   return 0;
}