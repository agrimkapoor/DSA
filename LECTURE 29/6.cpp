// IMPLEMENTATION OF STACK BY VECTOR
// not usng stl of stack
#include <iostream>
#include <vector>
using namespace std;
template<typename T>
class Stack {
vector<T> v;
public:

	void push(T d) {
		v.push_back(d);
	}

	void pop() {
		v.pop_back();
	}

	bool empty() {
		return v.size() == 0;
	}

	T top() {
		return v[v.size() - 1];
	}

};

int main() {

	Stack<int> s;
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