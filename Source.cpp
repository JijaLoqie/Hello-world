#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	int n, x, y, num1, num2;
	cin >> n;

	if (n >= 1000) {
		num1 = n / 100, num2 = n % 100;
	}
	else {
		num1 = n / 10, num2 = n % 10;
	}
	if (num1 > 18 || num2 > 18) {
		cout << 0;
		system("pause");
		return 0;
	}
	if (num2 == 0) {
		num2 = num1;
		num1 = 0;
	}
	if (num2 < 10 && num2!=0) {
		y = num2 - 1;
		x = 1;
	}
	else {
		for (x = 0; num2 - x >= 10; x++) {}
		y = num2 - x;
	}
	if (x == 0) {

		cout << y << x;
	}
	else cout << x << y;

		for (x = 0; num1 - x >= 10; x++) {}
		y = num1 - x;

	cout << x << y;
	system("pause");
	return 0;
}