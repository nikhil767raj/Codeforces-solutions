#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main() {
    ll n, k, bg = 0, req = 0, left = 0; cin >> n >> k;
    vector < ll > v;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        v.push_back(elem);
    }
    for (int i = 0; i < n; i++) {
        if ((left + v[i]) >= k) {
            req = (left + v[i]) / k;
            bg = bg + req;
            left = (left + v[i]) % k;
        }
        else {
            if (left != 0) {
                bg++;
                left = 0;
            }
            else {
                left = v[i];
            }
        }
    }
    if (left != 0) bg++;
    cout << bg << endl;
}