//union size
#include <iostream>
#include<vector>
using namespace std;

class DSU {
public:
	vector<int> parent, size;
	DSU(int n) {
		parent.resize(n + 1);
		size.resize(n + 1);

		for (int i = 0; i <= n; ++i) make_set(i), size[i] = 1;
	}

	void make_set(int i) {
		parent[i] = i;
	}

	int find_set(int u) {
		if (u == parent[u]) return u;

		return find_set(parent[u]);
	}

	void union_set(int u, int v) {
		int leader_u = find_set(u);
		int leader_v = find_set(v);

		if (size[leader_u] < size[leader_v]) swap(leader_u, leader_v);

		parent[leader_v] = leader_u;
		size[leader_u] += size[leader_v];
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