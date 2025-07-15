//insert and delete in linked list
#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node*next;

        //constructor
        node (int d){//JAB BHI NODE BANEGA TOH VALUES ASSIGN(NOT INTITIALISE) HO JAYEGI OF THE NODE
            data=d;
            next=NULL;
        }
};
//class se bahar hai functions
void printLL(node*head){// toh main fn waala head and ye waala head are diff pointers so main fn will not change 
    //CALL BY VALUE AS I DONT WANT TO CHANGE HEAD IN MAIN FN
    while(head!=NULL){//while(head) bhi likh sakte hai
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<"NULL\n";
}

int  lengthLL(node*head){
    int ans=0;
    while(head!=NULL){
        ans++;// if head is not null then there is a node so increment ans
        head=head->next;
    }
    return ans;
}
void insertAtFront(node*&head,node*&tail,int d){//we pass these pointers by reference which means main fn waala aur ye waala are same
//ARG AND PARA ARE BOTH POINTERS
// because we want to change head and tail of the main fn waali

if(!head){//head==NULL means no nodes
    //1.create a new node dynamically
        node*n=new node(d);//node created so construc is called
    //2.link
        head=tail=n;
}
else{
//1.CREATE A NEW NODE DYNAMICALLY
    node *n=new node(d);
//2.make link
    n->next=head;
//3.update head
    head=n;
}
}

void insertAtEnd(node*&head,node*&tail,int d){
    if(head==NULL){
        //1.create a new node dynamically
        node*n=new node(d);
        //2.links
            head=tail=NULL;
    }
    else{
    //1.create a new node dynamically
        node*n=new node(d);
    //2.links
        tail->next=n;
    //3.update tail
        tail=n;
    }
}
void insertAtMiddle(node*&head ,node*&tail ,int d ,int pos){
    if(pos==0){//INSERT BEFORE 0TH INDEX NODE SO AFTER INSERTION THIS WILL BE OF INDEX 0
        //INSERT AT FRONT
        insertAtFront(head,tail,d);
    }
    else if(pos>=lengthLL(head)){
        //INSERT AT END
        insertAtEnd(head,tail,d);
    }
    else{
        //1.take a pointer and traverse it to node of pos-1 because pos-1 waali node ka next change hoga toh uspe ek pointer
        node*temp=head;
        for(int i=1;i<=pos-1;i++){
            temp=temp->next;
        }
        //2.create a new node dynamically
            node*n=new node(d);
        //3. UPDATE 2 LINKS : PEHLE RIGHT WAALA LINK
            n->next=temp->next;
            temp->next=n;
    }

}

void deleteAtfront(node*&head,node*&tail){
    //WE HAVE TO PREVENT MEMORY LEAK
    if(head==NULL){//NO NODES
        return ;
    }
    else if(head->next==NULL){//ONE NODE (WE HAVE TO HANDLE THIS CASE WHEN WE CONSIDER BOTH HEAD AND TAIL)
        delete head;
        head=tail=NULL;
    }
    else{
        node*temp=head;
        head=head->next;
        delete temp;
        temp=NULL;
    }
}

void deleteAtEnd(node*&head,node*&tail){
    if(head==NULL){
        return;
    }
    else if(head->next==NULL){//jab ham tail ko consider toh ye bhi edge case hoga
        delete head;
        head=tail=NULL;
    }
    else{   
        //bring temp to 2nd last node as uska next will change
        node*temp=head;
        while(temp->next!=tail){//use temp for traversing and not head here as head is by reference
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
        
    }
}

void deleteAtMiddle(node*&head , node*&tail ,int pos){
    if(pos==0){
        deleteAtfront(head,tail);//this fn must be defined above
    }
    else if(pos>=lengthLL(head)-1){
        deleteAtEnd(head,tail);
    }
    else{
        node*temp=head;
        for(int i=1;i<=pos-1;i++){
            temp=temp->next;
        }
        node*temp2=temp->next;
        temp->next=temp2->next;
        delete temp2;
        temp2=NULL;

    }
}

//FN TO FIND THE MIDDLE NODE WITHOUT TAKING HELP OF L.L
node*mid(node*head){//CALL BY VALUE
    if(!head or head->next==NULL){
        return head;
    }
    node*fast=head->next,*slow=head;
    while(fast and fast->next){//fast do kadam kab le sakta hai
        //yeh condn order me likhna hoga
        //agar pehli condn false toh doosri check nhi hogi
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main() {
    node*head=NULL,*tail=NULL;// main fn we make these two pointers 
    //one more way is head=tail=NULL; pehle tail me gaya null phir tail ki value go in head
    //pointer me garbage nhi rakhte 
    //LINKED LIST OF MAIN FN

     insertAtFront(head,tail,1);
    insertAtFront(head,tail,2);
    insertAtFront(head,tail,3);

    printLL(head);

    insertAtEnd(head,tail,4);
    insertAtEnd(head,tail,5);

    printLL(head);

    deleteAtfront(head,tail);
    printLL(head);
    deleteAtEnd(head,tail);
    printLL(head);
    deleteAtMiddle(head,tail,2);
    printLL(head);

    node*ans=mid(head);
    cout<<ans->data;
    return 0;
}