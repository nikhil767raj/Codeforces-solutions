#include<bits/stdc++.h>
using namespace std;
int n = 1000000;
vector <int>v;
void prime()
{

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);
}
int main() {
    int t; cin >> t;
    prime();
    while (t--) {
        int d, ans = 1, j = 1; cin >> d;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] - 1 >= d) {
                ans = v[i];
                j = v[i];
                break;
            }
        }
        for (int i = 0; i < v.size(); i++) {
            if (v[i] - j >= d) {
                ans = ans * v[i];
                break;
            }
        }
        cout << ans << endl;
    }
}