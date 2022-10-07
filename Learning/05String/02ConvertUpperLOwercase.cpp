#include <bits/stdc++.h>
using namespace std;

void toUdpper(string str) {

   int index = str.length();

   int i = 0;
   while (i < index) {

      if (str[i] >= 97 &&
          str[i] <=
              122) {  // for lower if(str[i]<=65 && str[i]>=90){str[i]+=32;}
         str[i] -= 32;
      }

      i++;
   }

   isalpha(str[0]);

   cout << str;
}

string caseChange(string str) {

   int l = str.length();
   int i = 0;
   while (i < l) {
      if (str[i] >= 65 && str[i] <= 90) {
         str[i] += 32;
      } else {
         str[i] -= 32;
      }
      i++;
   }
   return str;
}

int main() {

   string str = "aSKdadtdSf";
   string str1 = str;

   cout << str1;

   // cout<<endl<<caseChange(str);

   return 0;
}
