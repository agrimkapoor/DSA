//CHECK IF GRAPH IS BIPARTITE
#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

template<typename T>
class Graph {
public:
	map<T, list<T>> adj;

	void addEdge(T u, T v, bool bidir = false) {
		adj[u].push_back(v);
		if (bidir) {
			adj[v].push_back(u);
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << "-->";
			for (auto n : p.second) {
				cout << n << " ";
			}
			cout << endl;
		}
	}

	bool bipartiteHelper(T src, unordered_map<T, int> &color, int c = 1) {//Color the starting node as 1
		color[src] = c;

		for (auto child : adj[src]) {
			if (color[child] == 0) {
				//color it and tell recursion to solve
				if (!bipartiteHelper(child, color, 3 - c)) {
					return false;
				}
			}
			else if (color[child] == color[src]) {
				return false;
			}
		}
		return true;
	}

	bool bipartite() {
		unordered_map<T, int> color;
        for (auto p : adj) {
            color[p.first] = 0;
        }

		for (auto p : adj) {
			if (color[p.first] == 0) {
				if (!bipartiteHelper(p.first, color)) {
					return false;
				}
			}
		}

		return true;
	}
};

int main() {
	Graph<string> g;

	g.addEdge("English", "Maths");
	g.addEdge("Hindi", "Maths");
	g.addEdge("Maths", "HTML");
	g.addEdge("HTML", "CSS");
	g.addEdge("CSS", "Bootstrap");
	g.addEdge("CSS", "JS");
	g.addEdge("Maths", "C++");
	g.addEdge("C++", "MERN");
	g.addEdge("C++", "CP");

	if (g.bipartite()) {
		cout << "Graph is Bipartite ✅" << endl;
	} else {
		cout << "Graph is NOT Bipartite ❌" << endl;
	}

	return 0;
}
