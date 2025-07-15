//cycle detection
#include <iostream>
#include <vector>
using namespace std;

class DSU {
public:
	vector<int> parent, rank;
	DSU(int n) {
		parent.resize(n + 1);
		rank.resize(n + 1);

		for (int i = 0; i <= n; ++i) make_set(i), rank[i] = 1;
	}

	void make_set(int i) {
		parent[i] = i;
	}

	int find_set(int u) {
		if (u == parent[u]) return u;

		return parent[u] = find_set(parent[u]);
	}

	void union_set(int u, int v) {
		int leader_u = find_set(u);
		int leader_v = find_set(v);

		if (rank[leader_u] < rank[leader_v]) swap(leader_u, leader_v);

		parent[leader_v] = leader_u;
		if (rank[leader_v] == rank[leader_u]) rank[leader_u]++;
	}
};

bool isCyclePresent(vector<pair<int, int> > edges, int n) {
	DSU d(n);

	for (auto p : edges) {
		int u = p.first;
		int v = p.second;

		int leader_u = d.find_set(u);
		int leader_v = d.find_set(v);

		if (leader_u == leader_v) {
			return true;
		}
		d.union_set(leader_u, leader_v);
	}

	return false;
}

int main() {

	int n;
	cout << "Enter number of nodes: ";
	cin >> n;

	int edges_cnt;
	cin >> edges_cnt;
	vector<pair<int, int> > edges;

	for (int i = 0; i < edges_cnt; ++i)
	{
		int u, v;
		cin >> u >> v;
		edges.push_back({u, v});
	}

	if (isCyclePresent(edges, n)) cout << "Cycle hai\n";
	else cout << "Cycle nahi hai\n";

	return 0;
}
