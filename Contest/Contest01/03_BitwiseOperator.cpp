#include <bits/stdc++.h>
using namespace std;

/*
max & of array
(if you do and(&) with any number it will remain constant or decrease )

****choose biggest elemet of an array

21=10101
& =01010
---------
   00000 decrease

21=10101
& =10101
---------
   10101 remain same

21=10101
& =11111
---------
   10101 remain same

max or(|) of array
if you do or of an array it will remain same or increase
to
*****find or of an array just sum take or of every element


21=10101
| =01010
---------
   11111  increase

21=10101
| =10101
---------
   10101 remain same

21=10101
& =11111
---------
   11111 increase

*/

int main() {

   vector<int> nums = {2, 32, 45, 5, 63, 321, 31};

   int andnum = 2;
   int ornum = 0;

   for (int i = 0; i < nums.size(); i++) {
      andnum = max(andnum, nums[i]);
      ornum = ornum | nums[i];
   }
   cout << andnum << " " << ornum;

   return 0;
}