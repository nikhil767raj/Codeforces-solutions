#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n];
		int zero=0,one=0;
		for(int i=0;i<n;i++) cin >> ar[i];
		for(int i=0;i<n;i++){
			if(ar[i] == 0) zero++;
			else one++;
		}
		if(zero>=n/2){
			cout << zero << endl;
			for(int i=0;i<zero;i++) cout << "0" << " ";
			cout << endl;
		}
		else{
			one=one-one%2;
			cout << one << endl;
			for(int i=0;i<one;i++)  cout << "1" << " ";
			cout << endl;
		}
	}
return 0;
}