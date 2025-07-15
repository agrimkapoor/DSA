#include <iostream>
#include <queue>
using namespace std;
/*
template<typename T, typename U>
class pair {
public:
	T first;
	U second;
};
*/

int main() {

	priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string> > > q; // Minheap

	pair<int, string> p;
	p.first = 95;
	p.second = "Vipin";

	cout << p.first << ", " << p.second << endl << endl;
	q.push(p);
	q.push({100, "Niyati"});
	q.push({80, "Prateek"});
	q.push({70, "Simran"});
	q.push({85, "Aadeep"});

	while (!q.empty()) {
		pair<int, string> x = q.top();
		cout << x.first << ", " << x.second << endl;
		q.pop();
	}

	return 0;
}