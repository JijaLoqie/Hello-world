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


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        vector<long>v;
        v.push_back(1);
        v.push_back(2);
        long k = 2;
        while (v[v.size()-2]+v.back()<n){
            v.push_back(v[(v.size()-2)]+v.back());
            if (v.back()%2==0){
                k+=v.back();
            }
        }
        cout << k << endl;
        
    }
    return 0;
}
