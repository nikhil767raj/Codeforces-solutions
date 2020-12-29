#include<bits/stdc++.h>
using namespace std;
int main() {
   int n; cin >> n;
   vector<int>v(n);
   for (int i = 0; i < n; ++i) {
      cin >> v[i];
   }
   sort(v.begin(), v.end());
   // for(int i=0;i<n;i++) cout << v[i] << " ";
   // v.resize(unique(v.begin(),v.end())-v.begin());
   v.resize(unique(v.begin(), v.end()) - v.begin());
   // cout << v.size() << endl;
   if (v.size() > 3) cout << "-1" << endl;
   else if (v.size() == 1) cout << "0" << endl;
   else if (v.size() == 2) {
      if (abs(v[0] - v[1]) % 2 == 0) cout << abs(v[0] - v[1]) / 2 << endl;
      else cout << abs(v[0] - v[1]) << endl;
   }
   else {
      if (abs(v[0] - v[1]) == abs(v[1] - v[2])) cout << abs(v[0] - v[1]) << endl;
      else cout << "-1" << endl;
   }
}