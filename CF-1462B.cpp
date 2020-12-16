#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      string s; cin >> s;
      int i;
      int k = s.length();
      bool fault = false;
      // if(s == "2020") {cout << "YES" << endl; continue;}
      if (s[0] == '2' && s[k - 1] == '0' && s[k - 2] == '2' && s[k - 3] == '0') {cout << "YES" << endl; continue;}
      else if (s[0] == '2' && s[1] == '0' && s[k - 1] == '0' && s[k - 2] == '2') {cout << "YES" << endl; continue;}
      else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[k - 1] == '0') {cout << "YES" << endl; continue;}
      else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')  {cout << "YES" << endl; continue;}
      else if (s[k - 1] == '0' && s[k - 2] == '2' && s[k - 3] == '0' && s[k - 4] == '2') {cout << "YES" << endl; continue;}
      else cout << "NO" << endl;

   }
}