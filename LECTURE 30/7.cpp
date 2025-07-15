// queue (normal )ki implementation by linked list

#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

class Queue {
public:
	node* head, *tail;
	Queue() {
		head = tail = NULL;
	}

	void push(int d) {//INSERT AT END
		if (!head) {
			head = tail	= new node(d);
			return;
		}

		node* n = new node(d);
		tail->next = n;
		tail = n;
	}

	void pop() {//DELETE AT FRONT
		if (!head) return;
		else if (!head->next) {//here both head and tail so edge case of 1 node
			delete head;
			head = tail = NULL;
		}
		else {
			node* temp = head;
			head = head->next;
			delete temp;
		}
	}

	bool empty() {
		return head == NULL;
	}

	int front() {
		return head->data;
	}
};

int main() {

	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}



	return 0;
}