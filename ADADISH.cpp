#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n];
		for(int i=0;i<n;i++) cin >> ar[i];
			sort(ar,ar+n,greater<int>());
		if(ar[0] == ar[n-1]){
			if(n%2 == 0){
				cout << n/2*ar[0] << endl;
			}
			else{
				cout << (n/2+1)*ar[0] << endl;
			}
		}
		else{
			for(int i=0;i<n;i++){
				int time=ar[i];
				if(ar[i] >ar[i+1] && possible){
					time=time+ar[i];
					left=ar[i]-ar[i+1];
					possible=false;
				}
				else{
					if(left == ar[i])
				}
			}

		}

	}

}