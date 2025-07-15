//BFS ALGORITHM ON GENERIC GRAPH
#include <iostream>
#include<map>
#include <list>
#include <queue>
using namespace std;
template<typename T>
class Graph{
public:
    map<T,list<T>>adj;
    void addEdge(T u ,T v,bool bidir=true){
        adj[u].push_back(v);
        if(bidir)adj[v].push_back(u);
    }
    void print(){
        for(auto p : adj){
            cout<<p.first<<" : ";
            for(auto neigh : p.second){
                cout<<neigh<<" ";

            }
            cout<<endl;
        }
    }
    // in L.L we made class for node hence fn were outside class
    //in graph it is whole made inside class(implemented by array) so iske fn inside class [this was also same case for implementation of heap]
    
    void bfs(T src){
        unordered_map<T,bool>visited;
            //initialisiation of visited map
             for (auto p : adj) {
              visited[p.first] = false;
             }
        queue<T>q;
        q.push(src);
        visited[src]=true;
        while(!q.empty()){
            T x=q.front();
            q.pop();

            cout<<x<<" ";

            //iterate on neighbours of the node
            for(auto neigh : adj[x]){
                if(!visited[neigh]){
                    q.push(neigh);
                    visited[neigh]=true;
                }
            }

        }
    }
};
int main() {
    Graph<int>g;

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(2, 1);
    g.addEdge(2, 4);
    g.addEdge(2, 3);
    g.addEdge(4, 3);
    g.addEdge(5, 3);

	g.print();

    g.bfs(0);
    return 0;
}