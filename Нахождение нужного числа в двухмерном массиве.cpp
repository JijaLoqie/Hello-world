#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int m, n, b, a;
	cin >> m >> n;
	int k;

vector<vector<int>> v(m, vector<int> ());
	for (int i = 0; i < m; i++)
	{
		cin >> k;
		vector<int> vl(k);
		for (int j = 0; j < k; j++)
		{
			cin >> vl[j];
		}
		v[i] = vl;
	}
	for (int as = 0; as < n; as++)
	{
		cin >> a >> b;
		cout << v[a][b] << endl;
	}
	system("pause");
}

