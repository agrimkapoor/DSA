// implementation of stack with help of L.L
// not usng stl
#include <iostream>
using namespace std;
 template<typename U>// HAR CLASS KA TEMPLATE (USS CLASS )
class node{
public:
   	U data;
	node<U>* next;// node ke baad tell datatype when using template
	node(U d): data(d), next(NULL) {}
};
template<typename T>
class Stack{
    public:
        node<T>*head;// we are making only head and not tail
        Stack(){
            head=NULL;
        }
        void push(T d){// char waala data
        node<T>* n = new node<T>(d);
		n->next	= head;
		head = n;
        }
        void  pop(){
           if(!head)return;
            // no need to specially handle case of 1 node as no tail
           node<T>*temp=head;
           head=head->next;
           delete temp;
        }
        bool empty(){
            return head==NULL;
        }
        T top(){
            return head->data;
            
        }
        

};

int main() {
    Stack<char> s;
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');

    while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
    // T and U will have same datatype
    // Stack<char>s  so T me char 
    // node<T> so node<char> so U me char
    //node<T> toh jo T me hoga woh data U me hoga

    //YOU CAN WRITE template<typename T> twice (before start of both class)
	cout << endl;
    return 0;
}