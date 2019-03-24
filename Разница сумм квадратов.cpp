#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
    long long t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++) {
        int n;
        cin >> n;
        long long a1 = 0;
        long long a2 = 0;
        for (int i = 1; i <= n; i++) {
            a1 += i;
            a2 += i * i;
        }
        a1 *= a1;
        cout << abs(a1 - a2) << endl;
    }
    return 0;
}
