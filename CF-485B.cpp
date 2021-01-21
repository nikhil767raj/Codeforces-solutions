#include<bits/stdc++.h>
using namespace std;
#define ll           long long int
bool cmp(const pair<int, int> &a,
         const pair<int, int> &b)
{
   return (a.second < b.second);
}
int main() {
   ll n; cin >> n;
   pair<ll, ll> ar[n];
   for (ll i = 0; i < n; i++) cin >> ar[i].first >> ar[i].second;
   sort(ar, ar + n);
   ll xdist = ar[n - 1].first - ar[0].first;
   sort(ar, ar + n, cmp);
   ll ydist = ar[n - 1].second - ar[0].second;
   ll k = max(xdist, ydist) - min(xdist, ydist);
   ll z = min(xdist, ydist) + k;
   // cout << xdist << " " << ydist << " " << k << " " << z << endl;
   cout << z*z << endl;
}