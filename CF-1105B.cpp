#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, k, x = 0; cin >> n >> k;
   // if(n == k && n == 1) {cout << n << endl; return 0;}
   int freq[26] = {0};
   string s; cin >> s;
   for (int i = 0; i < s.length(); i++) {
      if (s[i] == s[i + 1]) x++;
      else x = 0;
      if (x >= k - 1) {
         freq[s[i] - 'a']++; x = 0;
         if (k != 1) i++;
      }
   }
   sort(freq, freq + 26, greater<int>());
   // for(int i=0;i<26;i++) cout << freq[i] << " ";
   // cout << endl;

   cout << freq[0] << endl;
}