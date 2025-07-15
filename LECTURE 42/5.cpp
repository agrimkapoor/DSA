//TOPOLOGICAL SORT BY DFS  
//topo sort works on DAG(directed acyclic graph)
#include <iostream>
#include <set>
#include <unordered_map>
#include <map>
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

	void topologicalSortHelper(string src, list<string> &ans,
	                           unordered_map<string, bool> &visited) {

		visited[src] = true;

		for (auto neighbour : adj[src]) {
			if (!visited[neighbour]) {
				topologicalSortHelper(neighbour, ans, visited);
			}
		}

		ans.push_front(src);//just this is difference rest the function is same as dfs helper
	}



	void topologicalSort1() {
		unordered_map<string, bool> visited;
		list<string> ans;

		for (auto p : adj) {
			if (!visited[p.first])
				topologicalSortHelper(p.first, ans, visited);
		}

		for (auto el : ans) {
			cout << el << " ";
		}
		cout << endl;
	}

		void topologicalSort() {
		unordered_map<string, int> indegree;
		unordered_map<string, bool> visited;
		list<string> ans;

		for (auto p : adj) {
			for (auto neighbour : p.second) {
				if (indegree.count(neighbour) == 0) indegree[neighbour] = 1;
				else indegree[neighbour]++;
			}
		}

		// Find all those who have indegree->0
		// for (auto p : adj) {
		// 	cout << "Indegree: " << p.first << " : " << indegree[p.first] << endl;
		// }
		for (auto p : adj) {
			if (!indegree[p.first]) {
				topologicalSortHelper(p.first, ans, visited);
			}
		}

		for (auto el : ans) {
			cout << el << " ";
		}
		cout << endl;
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

	g.topologicalSort1();

	return 0;
}
