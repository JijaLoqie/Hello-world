#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	long long n, m, vmaxmin = 0, vminin = 1000*1000*1001;
	cin >> n >> m;
	vector<vector<long long>> v(n, vector<long long>(m));
	for (long long i = 0; i < n; i++)
	{
		vminin = 1000 * 1000 * 1001;
		for (long long j = 0; j < m; j++)
		{
			cin >> v[i][j];
			vminin = min(vminin, v[i][j]);
		}
		vmaxmin = max(vmaxmin, vminin);
	}
	cout << vmaxmin << endl;
}
