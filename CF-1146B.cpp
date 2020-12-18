#include<bits/stdc++.h>
using namespace std;
int main() {
   string s; cin >> s;
   string temp = "";
   int k = 0;
   for (int i = 0; i < s.length(); i++) {
      if (s[i] != 'a') {
         temp = temp + s[i];
      }
      else continue;
   }
   if (temp.length() % 2 == 1) {cout << ":(" << endl; return 0;}
   int z = s.length() - (temp.length() / 2);
   for (int i = z; i < s.length(); i++) {
      if (s[i] == temp[k]) k++;
      else {
         cout << ":(" << endl;
         return 0;
      }
   }
   for (int i = 0; i < z; i++) cout << s[i];
   cout << endl;
}