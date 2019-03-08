#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> factors;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			n /= i;
			factors.push_back(i);
		}
	}
	if (n != 1) {
		factors.push_back(n);
	}
	for (int i = 0; i < factors.size() - 1; i++) {
		cout << factors[i] << '*';
	}
	cout << factors.back() << endl;
	system("pause");
}

