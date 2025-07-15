#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
    // Using static for the comparator function (like static bool comp(...)) is only necessary if you define the comparator inside a class and want to use it without needing an object of that class
	static bool comp(vector<int> &a, vector<int> &b) {
		if (a[0] == b[0]) {
			return a[1] < b[1];
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
};