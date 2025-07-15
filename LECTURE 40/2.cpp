//GENERIC GRAPH : IT WILL WORK ON ALL DATATYPES
//there is no stl for graph
#include <iostream>
#include<unordered_map>
#include <list>
using namespace std;
template<typename T>
class Graph{
public:
    unordered_map<T,list<T>>adj;
    void addEdge(T u ,T v,bool bidir=true){
        adj[u].push_back(v);
        if(bidir)adj[v].push_back(u);
    }
    void print(){
        for(auto p : adj){
            cout<<p.first<<" : ";
            for(auto neigh : p.second){//iterate on list
                cout<<neigh<<" ";

            }
            cout<<endl;
        }
    }
};
int main() {
     Graph<string>g;

	g.addEdge("Modi", "Trump", true);
	g.addEdge("Modi", "Yogi", true);
	g.addEdge("Yogi", "Prabhu", false);
	g.addEdge("Prabhu", "Modi", false);
	g.addEdge("Putin", "Trump", false);
	g.addEdge("Putin", "Modi", false);
	g.addEdge("Putin", "Pope", false);

	g.print();
    return 0;
}