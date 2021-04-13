#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        v.push_back(elem);
    }
    map<int, int>freq;
    map<int, int>pos;
    int last = 0, maxi = 0, peak = 0, dist = 0, x;
    for (int i = 0; i < n; i++) {
        x = v[i];
        if (freq[x] == 0) {
            freq[x] = 1;
            pos[x] = i + 1;
        }
        else freq[x]++;

        if (freq[x] > maxi) {
            maxi = freq[x];
            dist = abs(i + 1 - (pos[x])) + 1;
            peak = pos[x];
            last = i + 1;
        }
        else if (freq[x] == maxi && abs(pos[x] - (i + 1)) + 1 < dist ) {
            peak = pos[x];
            last = i + 1;
            dist = abs(pos[x] - (i + 1)) + 1;
        }
    }
    cout << peak << " " << last << endl;
}