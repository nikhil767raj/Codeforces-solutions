#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    long long int stick,diam,ans; cin >> stick >> diam;
    ans=min(stick,diam);
    int get=min(ans,(stick+diam)/3);
    cout << get << endl;
  }
}