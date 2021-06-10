#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   vector < int > vr, vl;
   int bal = 0;
   while (t--) {
      string s; cin >> s;
      stack < char > st;
      int rt = 0, lt = 0;
      for (int i = 0; i < s.length(); i++) {
         if (s[i] == '(') st.push('(');
         else {
            if (st.empty()) rt++;
            else st.pop();
         }
      }
      while (!st.empty()) {
         lt++;
         st.pop();
      }
      if (rt != 0 && lt != 0) continue;
      else if (rt == 0 && lt == 0) bal++;
      else if (rt != 0) vr.push_back(rt);
      else  vl.push_back(lt);
   }
   int cnt = 0, sum = 0;
   for (int i = 0; i < vr.size(); i++) {
      for (int j = 0; j < vl.size(); j++) {
         if (vl[j] == -1) continue;
         if (vl[j] == vr[i]) {
            vl[j] = -1;
            cnt++;
            break;
         }
      }
   }
   sum += (bal) / 2 + cnt;
   cout << sum << endl;
}