#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
			int n, z,num,k=0; cin >> n >> z;
			int ar[n];
			for (int i = 0; i < n; i++) cin >> ar[i];
				for(int i=0;i<n;i++){
					if(z%2 == 0 && ar[i]*2 == z)
					{
					 //  k=k+1;
						 num=(k++)%2;
						
					}
					else if(ar[i]<=z/2) num=0;
					else{
						num=1;
					}
					cout << num << " ";
				}
				cout << endl;
		}
}