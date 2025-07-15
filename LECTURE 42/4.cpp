#include <iostream>
#include <unordered_map>
#include <list>
#include <set>
#include <climits>
using namespace std;
class Graph{
public :
    unordered_map<string,list<pair<string,int>>>adj;
    void addEdge(string u,string v,int d,bool bidir=true){
        adj[u].push_back({v,d});
        if(bidir)adj[v].push_back({u,d});
    }
    void print(){
        for(auto p : adj){
            cout<<p.first<<" : ";
            for(auto n : p.second){
                cout<<n.first<<" "<<n.second<<" ";
            }
            cout<<endl;
        }
    }
    void djikstra(string src ,string des){
        
        unordered_map<string,int>distance;
        unordered_map<string,string>parent;
        for(auto p : adj){
            distance[p.first]=INT_MAX;
        }
        distance[src]=0;
        parent[src]=src;

        set<pair<int,string>>s; 
        s.insert({distance[src],src});
        while(!s.empty()){
            auto x=*(s.begin());
            s.erase(s.begin());

            string par=x.second;
            int parD=x.first;

            for(auto neigh : adj[par] ){
                string child=neigh.first;
                int eD=neigh.second;
                if(parD + eD < distance[child]){
                    auto x=s.find({distance[child],child});
                    if(x!=s.end())s.erase(x);
                    distance[child]=parD + eD;
                    parent[child]=par;
                    s.insert({distance[child],child});
                }
            }
           
        }
                for (auto p : distance) {
			        cout << "Distance of " << src << " from " << p.first << " : " << p.second << endl;
		        }

		        for (auto p : parent) {
			        cout << "Parent of " << p.first << " : " << p.second << endl;
                }
                
                while (des != parent[des]) {
                    cout << des << "<--";
                    des = parent[des];
                }
		         cout <<des << endl;
    }
};
int main() {
    Graph g;
    g.addEdge("A","B",1);
    g.addEdge("D","B",1);
    g.addEdge("D","C",1);
    g.addEdge("A","D",1);
    g.addEdge("A","C",1);

    
    g.djikstra("A", "C");
    return 0;
}