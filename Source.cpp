#include <iostream>
#include <cmath>
#include <string>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	int a;
	int n;
	cin >> a >> n;
	int b = a;
	int res = 1;

		while (n > 0) {
			if (n % 2 == 1) {
				res *= b;
			}
			b *= b;
			n /= 2;
		}
		cout << res;
		system("pause");
}
