//MERGE SORT ON L.L
//merge and merge sort fn can be void also
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

//2 FUNCTIONS USED IN MERGE SORT : MERGE AND MID
node*mid(node*head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    node*f=head->next,*s=head;
    while(f and f->next){
        f=f->next->next;
        s=s->next;
    }
    return s;
}

node*merge(node*h1,node*h2){
    //1.base case
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
            nh->next=merge(h1,h2->next);
        }
        return nh;
}

node*mergesort(node*head){
    // iss fn se tail kharab hojayega
// as tail not changes it will point to that node throughout
// we are changing links so tail jis node pe point kar rha hai woh after sorting will not be the last node
    //1.base case (n==1 or n==0)
        if(!head or !head->next){
            return head;
        }
    //2.recursive case 
            //1.DIVIDE
                node*m=mid(head);
                node*a=head;
                node*b=m->next;
                m->next=NULL;
            //2.SORT
                a=mergesort(a);
                b=mergesort(b);
            //3.MERGE
                node*nh=merge(a,b);
                return nh;
}
int main() {
    node*head=NULL,*tail=NULL;
    insertAtFront(head,tail,4);
    insertAtFront(head,tail,1);
    insertAtFront(head,tail,3);

    

    printLL(head);

    head=mergesort(head);
    printLL(head);

    // hamare links change hogaye but main fn will head will point on a particular node as call by value 
    // and  now we store the result in  head which means head points on the first node of sorted L.L
    return 0;
}