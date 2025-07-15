//IMPLEMENTATION OF GRAPH BY ADJACENCY LIST (USING HASHMAP) This will be used to create generic graph
#include <iostream>
#include<list>
#include<unordered_map>
using namespace std;
class Graph{
public:
  
    unordered_map<string,list<string>>adj;//key is string means node ka datatype is string//value is list of neigh
    void addEdge(string u,string v,bool bidir=true){
        adj[u].push_back(v);
        if(bidir)adj[v].push_back(u);
    }
    void print(){
        for(auto p : adj){
            cout<<p.first<<":  ";
            for(auto neigh : p.second){//ITERATE ON LIST
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
};
int main() {
    Graph g;

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
//if a disconnected comp with only one node then this wont work as hashmap me aayega hi nhi woh