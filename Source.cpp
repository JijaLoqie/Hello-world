#include <iostream>
#include <cmath>
#include <string>
#include <queue>
#include <vector>
using namespace std;
int main()
{
	int n;
	int m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> v[i][j];
		}
	}
	vector<int> vse(n);
	int max;
	for (int i = 0; i < n; i++)
	{
		max = 0;
		for (int j = 0; j < m; j++)
		{
			max += v[i][j];		
		}
		vse[i] = max;
	}
	int maxvse = -1;
	int d = -1;
	for (int i = 0; i < n; i++)
	{
		if (maxvse < vse[i])
		{
			maxvse = vse[i];
			d = i;
		}
	}
	cout << maxvse << endl << d;
	system("pause");
}
