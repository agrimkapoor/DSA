//MERGE TWO SORTED LINKED LIST
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

node*merge(node*h1,node*h2){//CALL BY VALUE AS H1 AND H2 KO CHANGE NHI KARNA MAIN ME
//waise by reference bhi kar skate ho
//MUJHE MAIN FN KI DO L.L SE MATLAB NHI SO CAN PASS BY REF

    //1.base case  :agar koi bhi atleast ek L.L khaali hai toh return other
        if(h1==NULL)return h2;
        if(h2==NULL)return h1;
    //2.recursive case
        node*nh=NULL;
        if(h1->data < h2->data){
            nh=h1;
            nh->next=merge(h1->next ,h2);
        }
        else{
            nh=h2;
            nh->next=merge(h1 ,h2->next);
        }
        return nh;
}
int main() {
    node*h1=NULL,*t1=NULL;//LINKED LIST 1
    node*h2=NULL,*t2=NULL;//LINKED LIST 2

    insertAtFront(h1,t1,5);
    insertAtFront(h1,t1,3);
    insertAtFront(h1,t1,1);// now this is sorted

    insertAtFront(h2,t2,4);
    insertAtFront(h2,t2,2);

    node*head=merge(h1,h2);
    printLL(head);
    
    // ab h1 h2 se purani waali LL nhi milegi
    return 0;
}