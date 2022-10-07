#include <bits/stdc++.h>
using namespace std;

int main() {

   string str = "1234";

   int num = 0;

   for (int i = 0; i < str.length(); i++) {

      num = num * 10 + str[i] - 48;
   }
   cout << num;

   return 0;
}