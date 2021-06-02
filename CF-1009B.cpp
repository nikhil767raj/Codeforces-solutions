#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, one = 0, pos = 0;
   string s, temp = "", t = ""; cin >> s;
   n = s.length();
   for (int i = 0; i < s.length(); i++) {
      if (s[i] == '1') one++;
      else temp = temp + s[i];
   }
   for (int i = 0; i < one; i++) t = t + "1";
   for (int i = 0; i < temp.length(); i++) {
      if (temp[i] == '0') pos++;
      else break;
   }
   temp.insert(pos, t);
   cout << temp << endl;
}