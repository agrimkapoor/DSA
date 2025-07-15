// prims algorithm : it is a greedy algo
// write a fn to just find the cost of MST
#include <bits/stdc++.h>
#define pin pair<int,int>
using namespace std;
int minCost(int n , vector<vector<pair<int,int>>>&adj){//wted graph
    priority_queue<pin,vector<pin>,greater<pin>>pq;//min heap
    vector<int>vis(n);// 0 based indexing

    pq.push({0,0});//initially no edge so dist=0   and 0 is treated as src node
    //abhi visited mark nhi karna hai
    // jab ham ek node ko process karenge tab usse vis mark karna hoga
    int sum=0;
    while(!pq.empty()){
         auto x = pq.top();
            pq.pop();
            int wt=x.first;
            int node=x.second;

            if (vis[node]) continue;
            vis[node] = true;
            sum += wt;

            for (auto n : adj[node]) {
                if (!vis[n.first]) {
                    pq.push({n.second, n.first});//abhi dont mark visited
                }
            }
    }
    return sum;

}
int main() {
    int n = 4;
    vector<vector<pair<int,int>>> adj(n);//adjacency list

    // Sample undirected weighted graph
    // 0 --1-- 1
    // 0 --4-- 2
    // 1 --2-- 2
    // 2 --3-- 3

    adj[0].push_back({1, 1});
    adj[1].push_back({0, 1});

    adj[0].push_back({2, 4});
    adj[2].push_back({0, 4});

    adj[1].push_back({2, 2});
    adj[2].push_back({1, 2});

    adj[2].push_back({3, 3});
    adj[3].push_back({2, 3});

    cout << "Cost of MST: " << minCost(n, adj) << endl;
    return 0;
}
