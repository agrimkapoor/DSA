//REVERSE LINKED LIST
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node*next;
        node (int d){
            data=d;
            next=NULL;
        }
};
void printLL(node*head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<"NULL\n";
}


void insertAtFront(node*&head,node*&tail,int d){
if(!head){
        node*n=new node(d);
        head=tail=n;
}
else{
    node *n=new node(d);
    n->next=head;
    head=n;
}
}

void reverseLL(node*&head,node*&tail){
    node*p,*c,*n;//3 POINTERS (WE ARE TAKING N TO PREVENT MEMORY LEAK)
    
    p=NULL;
    c=head;
    while(c!=NULL){//head!=NULL here c is head  , c is for traversing
        n=c->next;
        c->next=p;

        //updation
        p=c;
        c=n;
    }
    swap(head,tail);

}
int main() {
        node*head,*tail;
        head=tail=NULL;
        insertAtFront(head,tail,1);
        insertAtFront(head,tail,2);
        insertAtFront(head,tail,3);
        printLL(head);
        cout<<"NOW REVERSING\n";
        reverseLL(head,tail);
        printLL(head);
    return 0;
}