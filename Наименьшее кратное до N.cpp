#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n, p, k = 1;
    bool t = true;
    cin >> n;
    while (n--) {
        cin >> p;
        while (true) {
            for (int i = 1; i <= p; i++)
            {
                if (k%i != 0) {
                    t = false;
                    break;
                }
                else {
                    continue;
                }
            }
            if (not (t)) {
                t = true;
                k++;
            }
            else {
                cout << k << endl;
                k = 1;
                break;
            }
        }
    }
}
