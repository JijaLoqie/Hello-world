#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
	int n, m;
	int k = 0;
	cin >> n >> m;
	int i = 0;
	int l = n * m - 1;
	vector<vector<int>> v(n, vector<int>(m));
	while (k != n*m-1)
	{
		for (int j = 0; j < m; j++) {
			v[i][j] = k++;
			if (k == l + 1) {
				break;
			}
			if (j == m - 1) {
				i++;
				for (int p = j;  p >= 0; p--)
				{
					v[i][p] = k++;
					if (k == l + 1) {
						break;
					}
				}
				i++;
			}
		}
		if (k == l + 1) {
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cout << v[i][j]<< "\t";
		}
		cout << "\n";
	}
	system("pause");
}
