#include<bits/stdc++.h>
using namespace std;
int main() {
   int n; cin >> n;
   int ar[n];
   int pos = 0, neg = 0, zero = 0, j = 1;
   vector<int>vn;
   vector<int>vp;
   vector<int>vz;
   bool ok = false;
   for (int i = 0; i < n; i++) {
      cin >> ar[i];
      if (ar[i] > 0) vp.push_back(ar[i]);
      else if (ar[i] < 0) vn.push_back(ar[i]);
      else vz.push_back(ar[i]);
   }
   cout << 1 << " " << vn[0] << endl;
   if (vp.size() == 0) {
      ok = true;
      vp.push_back(vn[1]);
      vp.push_back(vn[2]);
      cout << vp.size() << " ";
   }
   else cout << vp.size() << " ";
   for (int i = 0; i < vp.size(); i++) {
      cout << vp[i] << " ";
   }
   cout << endl;
   if (ok)
   {cout << vz.size() + vn.size() - 3 << " "; j = 3;}
   else
      cout << vz.size() + vn.size() - 1 << " ";
   for (int i = 0; i < vz.size(); i++) {
      cout << vz[i] << " ";
   }
   for (int i = j; i < vn.size(); i++) {
      cout << vn[i] << " ";
   }
   cout << endl;

}