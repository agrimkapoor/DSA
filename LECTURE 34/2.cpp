//Activity Selection
//Meeting Rooms II Ques : Leetcode 253
// You are given an array of meeting time intervals intervals[] where each interval has a start and end time.

// Goal: Find the minimum number of conference rooms required so that all meetings can take place without overlap.
// Input:  intervals = [[0,30],[5,10],[15,20]]
// Output: 2


//LOGIC :
// If a room becomes free before the next meeting starts → reuse it.

// If all rooms are still in use → you need a new room.
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;


    bool comp(vector<int> &a, vector<int> &b) {//there are 1d vectors
		if (a[0] == b[0]) {
			return a[1] < b[1];// do ele hi hai a and b mei
		}
		else {
			return a[0] < b[0];
		}
	}

	int minMeetingRooms(vector<vector<int>>& v) {
		sort(v.begin(), v.end(), comp);

		priority_queue<int, vector<int>, greater<int>> h;

		for (int i = 0 ; i < v.size() ; i++) {
			if (h.empty()) {
				h.push(v[i][1]);
			}
			else {
				int nmET = v[i][1];
				int nmST = v[i][0];

				if (h.top() <= nmST) {
					h.pop();
				}

				h.push(nmET);
			}
		}

		return h.size();
	}
int main(){
    vector<vector<int>>v={{0,10},{5,30},{15,20}};
    cout<<minMeetingRooms(v);
    return 0;
}