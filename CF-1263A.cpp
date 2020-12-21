#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int ar[3];
      int sum = 0;
      for (int i = 0; i < 3; i++) cin >> ar[i];
      sort(ar, ar + 3, greater<int>());
      if (ar[0] >= (ar[1] + ar[2])) cout << ar[1] + ar[2] << endl;
      else {
         int y = ar[0] - ar[1];
         sum = sum + y;
         ar[2] = ar[2] - y;
         ar[0] = ar[1];
         // if(ar[2]%2 == 0){
         sum = sum + ar[2] + (ar[0] - ceil((double)ar[2] / 2));
         cout << sum << endl;
         // }
         // else{


         // }



      }

   }
}