#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n, p, i;
    cin >> n;
    while (n--) {
        cin >> p;
        bool d = false;
        for (i = p - 1; i > 101101; i--)
        {
            int a100000 = i / 100000;
            int a1 = i % 10;
            int b10000 = (i % 100000) / 10000;
            int b10 = (i%100)/10;
            int c1000 = (i % 10000) / 1000;
            int c100 = (i % 1000) / 100;
            if (a100000 == a1 && b10000 == b10 && c1000 == c100) {
                for (int k = 100; k < 999; k++)
                {
                    for (int m = 100; m < 999; m++)
                    {
                        if (k*m == i) {
                            d = true;
                            break;
                        }
                    }
                    if (d) {
                        break;
                    }
                }
                if (d) {
                    break;
                }
            }
            if (d) {
                break;
            }
        }
            cout << i << endl;
    }
}
