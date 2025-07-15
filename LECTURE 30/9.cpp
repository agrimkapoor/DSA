//implement stack using 2 queues
#include <iostream>
#include <queue>
using namespace std;

template<typename T>
class Stack {
public:
	queue<T> q1, q2;

	void push(T d) {
		if (!q2.empty()) q2.push(d);
		else q1.push(d);
	}

	T top() {
		if (!q1.empty()) {
			while (q1.size() > 1) {
				T x = q1.front();
				q1.pop();
				q2.push(x);
			}
			T x = q1.front();
			q1.pop();
			q2.push(x);
			return x;
		}
		else if (!q2.empty()) {
			if (!q2.empty()) {
				while (q2.size() > 1) {
					T x = q2.front();
					q2.pop();
					q1.push(x);
				}
				T x = q2.front();
				q2.pop();
				q1.push(x);
				return x;
			}
		}
		return -1;
	}

	bool empty() {
		return q1.empty() and q2.empty();
	}

	void pop() {
		if (!q1.empty()) {
			while (q1.size() > 1) {
				T x = q1.front();
				q1.pop();
				q2.push(x);
			}
			q1.pop();
		}
		else if (!q2.empty()) {
			if (!q2.empty()) {
				while (q2.size() > 1) {
					T x = q2.front();
					q2.pop();
					q1.push(x);
				}
				q2.pop();
			}
		}
	}

};

int main() {
	Stack<int> s;
	// s.push('A');
	// s.push('B');
	// s.push('C');
	// s.push('D');
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;


	return 0;
}