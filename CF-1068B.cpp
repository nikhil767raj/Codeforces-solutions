#include<bits/stdc++.h>
using namespace std;
#define ll       long long int
int main() {
	ll b, count = 0; cin >> b;
	for (int i = 1; i <= sqrt(b); i++) {
		if (b % i == 0) {
			if (i != b / i) count += 2;
			else count++;
		}
	}
	cout << count << endl;
}