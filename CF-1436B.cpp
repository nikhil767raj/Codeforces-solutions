#include <bits/stdc++.h>
using namespace std;

void output(int n){
	vector<vector<int>> matrix(n);
	int counter = n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(n%2==1&&((i==n/2 && j==(n+1)/2) || (i==(n/2)-1 && j==((n)/2)))){
				matrix[i].push_back(1);
			}
			else matrix[i].push_back(0);
		}
	}
	for(int i=0;i<n;i++){
		matrix[i][n-counter] = 1;
		matrix[i][counter-1] = 1;
		counter--;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << matrix[i][j] << (j+1==n?"\n":" ");
		}
	}
}


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		output(n);
	}
	return 0;
}