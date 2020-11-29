#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int ar[n];
    bool ok=true;
    for(int i=0;i<n;i++) cin >> ar[i];
    for(int i=0;i<n-2;i++){
      int x=ar[i];
      for(int j=i+2;j<n;j++){
        if(x == ar[j]) {cout << "YES" << endl; ok=false; break;}
        else continue;
      }
      if(ok == false) break;
    }
    if(ok) cout << "NO" << endl;
  }
}