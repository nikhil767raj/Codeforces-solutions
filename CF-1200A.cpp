#include<bits/stdc++.h>
using namespace std;
int main() {
   int n; cin >> n;
   string s; cin >> s;
   int ar[10] = {0};
   for (int i = 0; i < n; i++) {
      if (s[i] == 'L') {
         for (int j = 0; j < 10; j++) {
            if (ar[j] == 0) {
               ar[j] = 1;
               break;
            }
            else continue;
         }
      }
      else if (s[i] == 'R') {
         for (int j = 9; j >= 0; j--) {
            if (ar[j] == 0) {
               ar[j] = 1;
               break;
            }
         }
      }
      else ar[s[i] - '0'] = 0;
   }
   for (int i = 0; i < 10; i++) cout << ar[i]; cout << endl;
}