#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<long long> d(n), b(n);
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;                    // Массив d - для накапливания элементов
        d[x]++;
        if (y + 1 != n) {
            d[y + 1]--;
        }
    }
    int cur = 0;
    for (int i = 0; i < n; i++) {
        cur += d[i];                // Массив b - прибавление единиц к отрезку
        b[i] += cur;
    }
    sort(b.rbegin(), b.rend());
    sort(a.rbegin(), a.rend());
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (a[i] * b[i]);
    }
    cout << ans;
}
