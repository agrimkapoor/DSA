//REVERSING LINKED LIST BY RECURSION
#include <iostream>
using namespace std;

class node{
public:
    int data;
    node*next;

    node(int d){
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

void recReverse(node*c ,node*p=NULL){
    if(c==NULL){
        return;
    }
    node*n=c->next;
    c->next=p;
    recReverse(n,c);
    //swap head and tail in main fn
}

//m2 of reversing linked list :u dont want to do swap in main fn
void recReverse2(node*&head,node*&tail){
    recReverse(head);
    swap(head,tail);
}
int main() {
    node*head=NULL,*tail=NULL;
    insertAtFront(head,tail,1);
    insertAtFront(head,tail,2);
    insertAtFront(head,tail,3);
    printLL(head);
    recReverse(head);
    swap(head,tail);// ye hame karne padega in main fn
    printLL(head);
    recReverse2(head,tail);
    printLL(head);

    return 0;
}