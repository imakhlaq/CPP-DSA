#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> p1, pair<string, int> p2) {

   if (p1.first < p2.first) {
      return true;
   } else {
      return false;
   }
}

int main() {

   vector<pair<string, int>> data;

   data.push_back(make_pair("Akhlaq", 100));
   data.push_back(make_pair("Yogesh", 32));
   data.push_back(make_pair("Tanvi", 3));
   data.push_back(make_pair("Mohit", 39));
   data.push_back(make_pair("Asif", 17));

   sort(data.begin(), data.end(), comp);

   for (int i = 0; i < data.size(); i++) {
      cout << data[i].first << "  " << data[i].second << endl;
   }

   return 0;
}