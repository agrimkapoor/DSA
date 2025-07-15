//kruskal algo
#include <iostream>
#include <vector>
#include<algorithm>
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

class triplet {
public:
	int u, v, wt;
	triplet(int u, int v, int wt) {
		this->u = u;
		this->v = v;
		this->wt = wt;
	}
};

bool comparator(triplet a, triplet b) {
	return a.wt < b.wt;
}

/*
7
9
1 2 1
3 7 1
6 7 1
1 3 2
3 5 2
2 6 3
1 4 4
4 3 7
2 3 8
*/

int main() {

	vector<triplet> edges;//edge list
	int n;
	cin >> n;

	int edges_cnt;
	cin >> edges_cnt;

	for (int i = 0; i < edges_cnt; ++i)
	{
		int u, wt, v;
		cin >> u >> v >> wt;
		triplet t(u, v, wt);
		edges.push_back(t);
	}

	sort(edges.begin(), edges.begin() + edges_cnt, comparator);

	int ans = 0;
	DSU d(n);
	for (auto t : edges) {
		int u = t.u;
		int v = t.v;
		int wt = t.wt;

		int leader_u = d.find_set(u);
		int leader_v = d.find_set(v);

		if (leader_u != leader_v) {
			ans += wt;
			d.union_set(leader_u, leader_v);
		}
	}

	cout << ans << endl;

	return 0;
}