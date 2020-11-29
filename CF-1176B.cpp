#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n];
		int ans=0,zero=0,one=0,two=0;
		for(int i=0;i<n;i++) cin >> ar[i];
		for(int i=0;i<n;i++){
			if(ar[i]%3==0) zero++;
			else if(ar[i]%3==1) one++;
			else if(ar[i]%3==2) two++;
		}
		ans=zero+min(one,two);
    // cout << ans << endl;
		if(one>two){
      one=one-two;
			ans=ans+one/3;
		}
		else{
      two=two-one;
			ans=ans+two/3;
		}
		cout << ans << endl;
	}
}