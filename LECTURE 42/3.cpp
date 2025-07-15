//DJIKSTRA ALGORITHM : it is used to SSSP on weighted graph
#include <iostream>
#include <set>
#include <unordered_map>
#include <map>
#include <list>
#include <climits>
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

        void djikstra(string src , string end_node){//src node and destination node

            set<pair<int,string>>s;//TAKE A SET JISKA EACH ELEMENT WILL BE A PAIR 
            // PAIR KA PEHLA ELEMENT WILL BE A INTEGER AND DOOSRA STRING
            //INT IS DISTANCE FROM SRC NODE AND STRING IS NEIGHBOUR
            //PEHLE INT DAALA TAAKI DISTANCE KE BASIS PE SORT HOJAYE

            unordered_map<string ,int >distance;// create a hashmap for distance
            //key will be node which is a string
            // value will be min distance of the node from src node which is int 

             unordered_map<string ,string >par;// create a hashmap for parent
             //key will be node which is a string
             // value will be parent of the node so value is a string

             for(auto p :adj){//for every pair in the graph (graph is also a map)
                    distance [p.first]=INT_MAX;//p.first  me key hoga
             }//iss loop me hamne initially distance of node ko infinity kar diya including the source node

             //initialisation steps: 
             distance[src]=0;//src node ka distance from itself is 0
             par[src]=src;

             s.insert({distance[src],src});//set me insert kar diya iss pair ko   : iss pair me node ka min distance from source and node ka naam

            while(!s.empty()){   // jab tak set empty nhi hai tab tak karo
                auto p =*(s.begin());// address ko derefer karke pair ki value ko store kar diya
                s.erase(s.begin());// remove node from set

                string parent=p.second;// node ka naam ko parent maan liya
                int parent_distance=p.first;//uska distance from src node is in p.first

                for(auto n : adj[parent]){//NOW ITERATE ON THE NEIGHBOURS OF THE NODE
                    //adj[parent] me neighbours of parent node hoga
                    string child=n.first;
                    int edge_distance=n.second;
                    //child ka distance source se nikalna hai

                    if(parent_distance + edge_distance  < distance[child] ){
                        //child ka current distance update hone waala hai
                        //toh set mei latest distance hi add krna hoga
                        auto x=s.find({distance[child],child});
                        //set mei find kia  agar mil gaya toh delete karo

                        if(x!=s.end()){//khatam hogaya
                            s.erase(x);

                        }
                        distance[child]=parent_distance+edge_distance;
                        par[child]=parent;
                        s.insert({distance[child],child});
                    }
                    

                }//end of for loop
                

            }//end of while loop
            
            for (auto p : distance) {
			        cout << "Distance of " << src << " from " << p.first << " : " << p.second << endl;
		        }

		        for (auto p : par) {
			        cout << "Parent of " << p.first << " : " << p.second << endl;
		            }
                while (end_node != par[end_node]) {
                    cout << end_node << "<--";
                    end_node = par[end_node];
                }
		         cout << end_node << endl;

        }
};
int main() {
    graph g;
    g.addEdge("A","B",1);
    g.addEdge("D","B",1);
    g.addEdge("D","C",1);
    g.addEdge("A","D",1);
    g.addEdge("A","C",1);

    // g.print();
    g.djikstra("A", "C");
    return 0;
}