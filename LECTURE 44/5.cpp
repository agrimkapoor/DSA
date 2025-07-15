//dsu
#include <iostream>
#include<vector>
using namespace std;

class DSU {
public:
	vector<int> parent;
	DSU(int n) {
		parent.resize(n + 1);
		for (int i = 1; i <= n; ++i) make_set(i);
	}

	void make_set(int i) {
		parent[i] = i;
	}

	int find_set(int u) {
		if (u == parent[u]) return u;

		return find_set(parent[u]);
	}

	void union_set(int u, int v) {//union find
		int leader_u = find_set(u);
		int leader_v = find_set(v);

		parent[leader_v] = leader_u;
	}
};

int main() {
    DSU d(5);

	d.union_set(1, 2);
	d.union_set(3, 4);
	d.union_set(1, 3);

	cout << d.find_set(5) << endl;

	return 0;
}
