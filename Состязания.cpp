#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct node {
	int max_score, total_score, id;

	node(int t_max, int t_total, int t_id) : max_score(t_max), total_score(t_total), id(t_id) {}
};

bool cmp(node &a, node &b) {
	if (a.max_score == b.max_score) {
		if (a.total_score == b.total_score) {
			return a.id < b.id;
		}
		return a.total_score > b.total_score;
	}
	return a.max_score > b.max_score;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<node> v;
	for (int i = 0; i < n; i++) {
		int t_max = 0, t_total = 0;
		for (int j = 0; j < m; j++) {
			int cur_score;
			cin >> cur_score;
			t_max = max(t_max, cur_score);
			t_total += cur_score;
		}
		v.push_back(node(t_max, t_total, i));
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[0].id << endl;
