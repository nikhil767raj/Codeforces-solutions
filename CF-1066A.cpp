#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int len, v, l, r;
	for (int i = 0; i < n; i++)
	{
		cin >> len >> v >> l >> r;
		cout << (len / v - r / v + (l - 1) / v) << endl;
	}
	return 0;
}