//SSSP: single source shortest path
//bfs is used to find SSSP

#include <iostream>
#include <unordered_map>
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
    void bfs(T src){
        unordered_map<T,bool>visited;
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
            for(auto neigh : adj[x]){
                if(!visited[neigh]){
                    q.push(neigh);
                    visited[neigh]=true;
                }
            }

        }
    }
    int SSSP( T src , T des){
        queue<T> q;
		unordered_map<T, bool> visited;
		unordered_map<T, int> distance;
		unordered_map<T, T> parent;

        q.push(src);
        visited[src]=true;
        distance[src] = 0; // src ka distance khud se is 0
		parent[src] = src;

        while(!q.empty()){
            T x =q.front();
            q.pop();

            for(auto neigh : adj[x]){
                if(!visited[neigh]){
                    q.push(neigh);
                    visited[neigh] = true;
					distance[neigh] = distance[x] + 1;
					parent[neigh] = x;
                }
            }
        }
        // cout<<"The distance of "<<des<<" from "<<src<<" is : "<<distance[des]<<" ";
        T des_copy=des;
        //Printing the path from des to src
        while(des !=parent[des]){
            cout<<des<<"<--";
            des=parent[des];
        }
        cout<<des<<" ";
        return distance[des_copy];
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
    cout<<g.SSSP(0,5);
    return 0;
}