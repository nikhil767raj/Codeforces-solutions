#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int ar[n];
	for(int i=0;i<n;i++) cin >> ar[i];
		sort(ar,ar+n);
	for(int i=0;i<n-1;i++){
		if(abs(ar[i]-ar[i+1]) == 1)
			ar[i+1]=ar[i];
		else{
			sum=sum+abs(ar[i]-ar[i+1]);
			ar[i+1]=ar[i];
		}
	}
	cout << ar[0] << endl;


}