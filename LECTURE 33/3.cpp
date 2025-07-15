//TILL NOW PRIORITY QUEUE WAS OF INT
#include <iostream>
#include <queue>
#include <functional>
using namespace std;
/*
class comparator {
public:
	bool operator()(int a, int b) {
		return a < b;
	}
};
*/


class Student {
public:
	string name;
	int age;
	int marks;
	Student(string n, int a, int m): name(n), age(a), marks(m) {

	}

	void print() {
		cout << "Name: " << name << ", age: " << age;
		cout << ", marks: " << marks << endl;
	}
};

class comparator {
public:
	bool operator()(const Student &a,
	                const Student &b) {// b heap se pehle niklega
		return a.marks < b.marks;//MAX HEAP
		//bada wala number pehle nikal raha hai
	}
    // Why use const?
    // Prevents Accidental Modification
	// as we are passing by ref(kyuki passing by val mei extra T.C of copying)
	//so actual object pe changes nhi hone chahiye hai
    // The comparator function should only compare the Student objects, not modify them.
    // Using const ensures that the function cannot change the values of a and b
};

int main() {

	priority_queue<Student, vector<Student>, comparator > h; // Minheap
	Student a("Aadeep", 19, 98);
	Student b("Mudit", 20, 2);
	Student c("Aryan", 18, 70);
	h.push(a);
	h.push(b);
	h.push(c);

	while (!h.empty()) {
		Student x = h.top();
		x.print();
		h.pop();
	}

	/*
		priority_queue<int, vector<int>, comparator > h; // Minheap

		h.push(4);
		h.push(2);
		h.push(1);
		h.push(3);

		while (!h.empty()) {
			cout << h.top() << " ";
			h.pop();
		}
	*/

	return 0;
}