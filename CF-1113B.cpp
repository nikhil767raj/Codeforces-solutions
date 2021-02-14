#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, ob; cin >> n;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        v.push_back(elem);
    }
    int mn = *min_element(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(), 0);
    int ans = sum;
    for (int i = 0; i < v.size(); i++) {
        ob = v[i];
        for (int j = 1; j <= ob; j++) {
            if (ob % j == 0) {
                int cur = sum - mn - ob;
                cur = cur + (mn * j) + (ob / j);
                ans = min(ans, cur);
            }
        }
    }
    cout << ans << endl;
}