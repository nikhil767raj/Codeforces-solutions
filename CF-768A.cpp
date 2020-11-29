#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int ar[n];
	int count=0;
	int mx=INT_MIN,mn=INT_MAX;
	if(n == 1 || n == 2) {cout << "0" << endl; return 0;}
	for(int i=0;i<n;i++){
	   cin >> ar[i];
	   mx=max(ar[i],mx);
	   mn=min(ar[i],mn);
	} 

	for(int i=0;i<n;i++){
		if(ar[i]<mx && ar[i]> mn) count++;
	}
	cout << count << endl;
}