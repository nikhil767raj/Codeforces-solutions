#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, sum = 0, z; cin >> n;
        int freq[2000] = {0};
        int ar[n];
        for (int i = 0; i < n; i++) { cin >> ar[i]; freq[ar[i]]++;}
        sort(freq, freq + 2000);
        for (int i = 0; i < 2000; i++) {
            if (freq[i] == 0) continue;
            else {
                z = freq[i];
                sum = sum + z;
                for (int j = i; j < 2000; j++)
                    freq[j] = freq[j] - z;
            }
        }
        cout << sum << endl;
    }
}