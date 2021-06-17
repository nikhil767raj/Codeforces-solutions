#include<bits/stdc++.h>
using namespace std;
int main() {
   int n; cin >> n;
   int cnt = 0;
   vector < int > v;
   for (int i = 0; i < n; i++) {
      int elem; cin >> elem;
      v.push_back(elem);
   }
   int j = 1;
   sort(v.begin(), v.end());
   for (int i = 0; i < n; i++) {
      if (v[i] >= j) {cnt++; j++;}
   }
   cout << cnt << endl;
}