#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, cnt = 0, idx = INT_MAX; cin >> n;
   n = 2 * n;
   vector < int > v;
   for (int i = 0; i < n; i++) {
      int elem; cin >> elem;
      v.push_back(elem);
   }
   for (int i = 0; i < n - 1; i++) {
      if (v[i] == v[i + 1]) i++;
      else {
         int x = v[i];
         for (int j = i + 1; j < n; j++) {
            if (x == v[j]) {
               idx = j;
               // cout << idx << endl;
               break;
            }
         }
         for (int k = idx; k > i + 1; k--) {
            swap(v[k], v[k - 1]);
            cnt++;
         }
         i++;
      }
   }
   cout << cnt << endl;
}