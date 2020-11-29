#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int ar[n];
	int mx=-1,cur_len=0,cur_elem=-1,lenMx=0;
	while(n--){
		int x; cin >> x;
		

		if(x!=cur_elem){
			cur_elem=x;
			cur_len=0;
		}
		cur_len++;

		// it checks the maximum element
		if(cur_elem>mx){
			mx=cur_elem;
			lenMx=0;
		}

		if(mx == cur_elem){
			lenMx=max(lenMx,cur_len);
		}

		
	}
	cout << lenMx << endl;

}