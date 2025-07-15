//CREATING A WEIGHTED GRAPH 
#include <iostream>
#include <map>
#include <list>
using namespace std;
class graph{
    public:
        map<string ,list<pair<string ,int >>>adj;
        void addEdge(string u ,string v ,int d,bool bidir=true){
            adj[u].push_back({v,d});
            if(bidir){
                adj[v].push_back({u,d});
            }
        }
        void print(){
            for( auto p : adj){
                cout<<p.first<<"-->";
                for(auto n :p.second){
                    cout<<"("<<n.first<<" , "<<n.second<<")";
                }
                cout<<endl;
            }
        }

        
};
int main() {
    graph g;
    g.addEdge("A","B",1);
    g.addEdge("D","B",1);
    g.addEdge("D","C",1);
    g.addEdge("A","D",1);
    g.addEdge("A","C",1);

    g.print();
    return 0;
}