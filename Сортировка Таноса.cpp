#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void proverka(int n, vector<int> v) {
	bool ok = true;
	for (int i = 0; i < n; i++)
	{
		if (i <n - 1 && v[i] > v[i + 1]) {
			ok = false;
			break;
		}
	}
	if (ok) {
		cout << v.size() << endl;
		for (int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
	}
	else {
		int period = 1, kmaxl = 1;
		for (int i = 0; i < (n/2)-1; i++)
		{
			if (v[i] <= v[i + 1]) {
				period++;
				kmaxl = max(kmaxl, period);
			}
			else {
				kmaxl = max(kmaxl, period);
				period = 1;
			}
		}
		int periodr = 1, kmaxr = 1;
		for (int i = n/2+1; i < n-1; i++)
		{
			if (v[i] <= v[i + 1]) {
				periodr++;
				kmaxr = max(kmaxr, period);
			}
			else {
				kmaxr = max(kmaxr, period);
				periodr = 1;
			}
		}
		int l, r;
		if (kmaxr < kmaxl) {
			l = 0;
			r = n / 2;
		}
		else {
			l = n / 2;
			r = n;
		}
		vector<int> (l, r).swap(v);
		proverka(n / 2, v);
	}
}
int main()
{
	int n, kmax = 0, period = 1;
	cin >> n;
	vector<int> v(n), spis;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	proverka(n, v);
	
}
