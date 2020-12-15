#include<bits/stdc++.h>
using namespace std;
int main(){
   int n; cin >> n;
   int ar[n];
   for(int i=0;i<n;i++) cin >> ar[i];
   sort(ar,ar+n);
   if(ar[0] == 1) cout << "-1" << endl;
   else cout << 1 << endl;
}