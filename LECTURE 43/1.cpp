//TOPOLOGICAL SORT BY BFS
//u-->v  : edge from u to v : v is neigh of u but u is not neigh of v
#include <iostream>
#include <set>
#include <unordered_map>
#include <map>
#include <queue>
#include <list>
using namespace std;


class Graph {
public:
	map < string, list<string > >adj;

	void addEdge(string u, string v, bool bidir = false) {
		adj[u].push_back(v);
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

	list<string> topologicalSort() {
		unordered_map<string, int> indegree;
		list<string> ans;

		for (auto p : adj) {
			for (auto child : p.second) {
				indegree.count(child) ? indegree[child]++ : indegree[child] = 1;
			}
		}

		queue<string> q;
		for (auto p : adj) {
			if (indegree.count(p.first) == 0) {
				q.push(p.first);
			}
		}


		while (!q.empty()) {
			auto f = q.front();
			q.pop();
			ans.push_back(f);

			for (auto child : adj[f]) {
				if (indegree[child]) {
					indegree[child]--;
					if (indegree[child] == 0) {
						q.push(child);
					}
				}
			}
		}

		return ans;
	}


};

int main() {

	Graph g;
	g.addEdge("English", "Maths");
	g.addEdge("Hindi", "Maths");
	g.addEdge("Maths", "HTML");
	g.addEdge("HTML", "CSS");
	g.addEdge("CSS", "Bootstrap");
	g.addEdge("CSS", "JS");
	g.addEdge("Maths", "C++");
	g.addEdge("C++", "MERN");
	g.addEdge("C++", "CP");

	list<string> ans = g.topologicalSort();

	for (auto x : ans) {
		cout << x << " ";
	}
	cout << endl;

	return 0;
}