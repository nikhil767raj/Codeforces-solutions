// This code is written by Nikhil Raj
// Contact:-- nikhil767raj@gmail.com
//--------------------------------------------

#include<bits/stdc++.h>
using namespace std;
#define ll       		 long long int
#define nl       		 endl
#define push_back        pb
#define first            f
#define second           s
#define mod              100000007
#define inf              1e9

void nikhil() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	nikhil();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector < int > v;
		for(int i=0;i<n;i++){
			int elem; cin >> elem;
			v.push_back(elem);
		}
		int mn=INT_MAX;
		for(int i=0;i<v.size();i++){
			int k=v[i];
			if(k-(i+1)<0){
				cout << i+1  << endl;
				break;
			}
			else{
				mn=min(mn,(k/n)+1);
			}
		}
		cout << mn << endl;
	}

	return 0;
}