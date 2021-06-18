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
      stack < int > st;
      for (int i = v.size() - 1; i >= 0; i--) {
         if (st.empty()) {
            st.push(v[i]);
         }
         else {
            while (!st.empty()) {
               if (v[i] > st.top()) {
                  cnt++;
                  break;
               }
               else st.pop();
            }
            st.push(v[i]);
         }
      }
      cout << cnt << endl;
   }
}