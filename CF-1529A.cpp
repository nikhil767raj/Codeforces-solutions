#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n, cnt = 0; cin >> n;
      vector < int > v;
      for (int i = 0; i < n; i++) {
         int elem; cin >> elem;
         v.push_back(elem);
      }
      sort(v.begin(), v.end());
      int j = n - 1;
      for (int i = 0; i < j; i++) {
         if ((v[i] + v[j]) / 2 < v[j]) {
            cnt++;
            i--;
            j--;
         }
         else {
            break;
         }
      }
      cout << cnt << endl;
   }
}