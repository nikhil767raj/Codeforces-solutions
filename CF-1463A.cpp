#include<bits/stdc++.h>
using namespace std;
#define ll      long long
int main(){
   int t; cin >> t;
   while(t--){
      ll a,b,c,sum; cin >> a >> b >> c;
      int mn=min(min(a,b),c);
      sum=a+b+c;
      if(sum%9 == 0 && sum/9<=mn) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
}