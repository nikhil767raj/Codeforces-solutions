#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,i,z, sum = 0; cin >> n;
	int ar[n];
	bool possible=false;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		sum = sum + ar[i];
	}
	int m; cin >> m;
	while(m--){
			int x,y; cin >> x >> y;
			if(sum<=y){
				z=max(x,sum);
			    possible= true;
				break;
			}
			else continue;
		}
	if(possible) cout << z << endl;
	else cout << "-1" << endl;
	return 0;

}