//cycle detection and break cycle
#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

int lengthLL(node* head) {
	int cnt = 0;
	while (head) {
		cnt++;
		head = head->next;
	}
	return cnt;
}

void insertAtEnd(node* &head, node* &tail, int data) {
	node*n = new node(data);
	if (!head) {
		head = tail = n;
	}
	else {
		tail->next = n;
		tail = n;
	}
}

void printLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";
}

void breakCycle(node* head, node* f) {
	node* s = head;
	node* fp = head;
	while (fp->next != f) fp = fp->next;

	while (f != s) {
		fp = f;
		f = f->next;
		s = s->next;
	}

	fp->next = NULL;
}


bool isCyclic(node* head) {
	node* f = head, *s = head;
	while (f and f->next) {
		f = f->next->next;
		s = s->next;
		if (f == s) {// agar cycle mile toh break karo
			breakCycle(head, f);
			return true;
		}
	}
	return false;
}



int main() {

	node* head = NULL, *tail = NULL;

	insertAtEnd(head, tail, 11);
	insertAtEnd(head, tail, 12);
	insertAtEnd(head, tail, 13);
	insertAtEnd(head, tail, 14);
	insertAtEnd(head, tail, 15);
	insertAtEnd(head, tail, 2);
	insertAtEnd(head, tail, 6);
	insertAtEnd(head, tail, 4);
	insertAtEnd(head, tail, 1);
	insertAtEnd(head, tail, 10);
	insertAtEnd(head, tail, 20);
	printLL(head);
	tail->next = head->next->next->next;


	if (isCyclic(head)) {
		cout << "Cycle\n";
	}
	else cout << "No Cycle\n";


	printLL(head);
	return 0;
}