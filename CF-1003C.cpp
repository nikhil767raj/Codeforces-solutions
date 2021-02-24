#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, count, sum = 0; cin >> n >> k;
    double mx = 0;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        v.push_back(elem);
    }
    for (int i = 0; i < v.size() - k + 1; i++) {
        sum = v[i];
        count = 1;
        for (int j = i + 1; j < n; j++) {
            if (count >= k) {
                mx = max(mx, (double)sum / count);
                sum = sum + v[j];
                count++;
            }
            else {
                sum = sum + v[j];
                count++;
            }
        }
        mx = max(mx, (double)sum / count);
    }
    // cout << sum << " " << count << endl;

    printf("%.10lf", mx);
}