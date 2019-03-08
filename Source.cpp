#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	int m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		v[i][0] = 1;
	}
	for (int i = 0; i < m; i++) {
		v[0][i] = 1;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++)
		{
			v[i][j] = v[i - 1][j] + v[i][j - 1];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}

