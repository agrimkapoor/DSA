//DFS 

#include <iostream>
#include <queue>
#include <map>
#include <unordered_map>
#include <list>
using namespace std;

template<typename T>
class Graph {
public:
	map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) {
			adj[v].push_back(u);
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << "--> ";
			for (auto neigh : p.second) {
				cout << neigh << ", ";
			}
			cout << endl;
		}
	}
    
    void dfsHelper(T src,unordered_map<T,bool>&visited){
        cout<<src<<" ";
        visited[src]=true;
        for(auto neigh : adj[src]){
            if(!visited[neigh]){
                dfsHelper(neigh,visited);
            }
        }
    }
    void dfs(T src){
        unordered_map<T,bool>visited;
		
        dfsHelper(src, visited);//pehla dfs apply from src
        int components=1;//this will always be int 
        for(auto p : adj){
            if(!visited[p.first]){
                components ++;
                dfsHelper(p.first,visited);//uss connected component pe dfs apply karo
            }
        }
        cout << "\nComponents : " << components << endl;
    }

};
int main() {
    Graph<int> g;

	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 1);
	g.addEdge(2, 4);
	g.addEdge(2, 3);
	g.addEdge(4, 3);
	g.addEdge(5, 3);
	g.addEdge(6, 7);
	g.addEdge(16, 17);

    g.dfs(0);
    return 0;
}