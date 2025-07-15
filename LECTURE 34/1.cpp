//meeting rooms II : leetcode 253
//activity selection : greedy
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
int minMeetingRooms(vector<vector<int>>&v){
    //1.sort 
    sort(v.begin(),v.end());
    //sorting a 2d array will not sort the individual rows but arrange the rows lexicographically

    //so it is sorted on basis of start time
    priority_queue<int,vector<int>,greater<int>>h;//min heap
    for(int i=0;i<v.size();i++){
        int nmST=v[i][0];
        int nmET=v[i][1];
        if(h.empty()){
            h.push(v[i][1]);
            continue;
        }
        if(h.top() <= nmST){
            h.pop();
        }
        h.push(nmET);//pq mei endtime daalenge
        //jaise i badega start time bhi badh rha hai
    }
    return h.size();
}

int main() {
    vector<vector<int>>v={{0,10},{5,30},{15,20}};
    cout<<minMeetingRooms(v);
    return 0;
}