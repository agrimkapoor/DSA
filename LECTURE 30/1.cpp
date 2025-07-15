// implementation of stack with help of L.L
// not usng stl
#include <iostream>
using namespace std;
//  template<typename U>// HAR CLASS KA TEMPLATE (USS CLASS )
class node{
public:
    int data;
    node*next;
    node (int d):data(d),next(NULL){ }
};
// template<typename T>
class Stack{
    public:
        node*head;// we are making only head and not tail
        Stack(){
            head=NULL;// stack ke constructor me stack ke data member ko initialise kar diya
        }
        void push(int d){//insert at front
            node*n=new node(d);
            n->next=head;
            head=n;
        }
        void  pop(){//delete at front
           if(!head)return;
            // no need to specially handle case of 1 node as no tail
           node*temp=head;
           head=head->next;
           delete temp;
        }
        bool empty(){
            return head==NULL;
        }
        int top(){
            return head->data;
            
        }
        

};

int main() {
    Stack s;
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