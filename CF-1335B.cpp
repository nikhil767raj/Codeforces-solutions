#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;

	while (t--) {
	   	string temp = "", str = "";
		int k = 0,j=0;
		int n, a, b; cin >> n >> a >> b;
		int bb=b;
		while (bb--) {
			temp = temp + char(97+k);
			k = (k + 1) % 27;
		}
		int num=n/b;
		while (num--) {
			str = str + temp;
		}
		int f=n%b;
		while (f--) {
			str = str + str[j];
			j = j + 1;
		}
// cout << temp << endl;
		cout << str << endl;
	}
	return 0;
}