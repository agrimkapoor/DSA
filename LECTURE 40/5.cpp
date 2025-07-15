//APPLICATION OF BFS( SSSP ): SNAKE AND LADDER

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
    void SSSP( T src , T des){
        queue<T> q;
		unordered_map<T, bool> visited;
		unordered_map<T, int> distance;
		unordered_map<T, T> parent;

        q.push(src);
        visited[src]=true;
        distance[src] = 0;
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
        // for (auto p : distance) {
		// 	cout << "Distance of " << p.first << " from " << src << " : " << p.second << endl;
		// }
        cout<<"The distance of "<<des<<" from "<<src<<" is : "<<distance[des]<<endl;
    
        while(des !=parent[des]){
            cout<<des<<"<--";
            des=parent[des];
        }
        cout<<des<<" ";
        
    }
};
int main() {
    Graph<int>g;

    int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

    for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
            //int v=u + dice+ board[v] THIS IS INCORRECT AS USING BOARD[V] IN RHS AND V ME ISS SAMAY G.V HOYEGI
			int v = u + dice ;
            v=v + board[v];
            //m2 is v= u + dice + board[ u + dice ]
			g.addEdge(u, v, false);
		}
	}
    g.SSSP(0, 36);
    return 0;
}