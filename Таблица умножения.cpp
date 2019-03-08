#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	int k;
	int ll = 0; // Количество строк
	int bb = 0; // Количество символов в строке
	int m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m));
	while (ll<n)
	{
		cout << ll * bb << " ";
		bb++;
		if (bb == m) {
			ll++;
			bb = 0;
			cout << endl;
		}
	}
	system("pause");
}

