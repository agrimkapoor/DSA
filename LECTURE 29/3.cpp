//BUBBLE SORT

#include <iostream>
using namespace std;

class node{
public:
    //1.data members
    int data;
    node*next;
    //CONSTRUCTOR
    node(int d){
        data=d;
        next=NULL;
    }
    
};
int  lengthLL(node*head){//LENGTH OF LL IS NUMBER OF NODES
    int ans=0;
    while(head){
        ans++;
        head=head->next;
    }
    return ans;
}
void insertatend(node*  &head,node* &tail,int x){
        node*n=new node(x);
        if(!head){//head==NULL WAALA CASE (NO NODES)
            head=tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
    }

void bubblesort(node*&head,node*&tail){// head change hoga so pass by ref so main fn waala head and tail will change

    node*p,*c,*n;
    int N=lengthLL(head);// small n is node*
    for(int i=0;i<N-1;i++){
        c=head;
        p=NULL;
        while(c and c->next){
            n=c->next;
            if(c->data > n->data){// swapping hogi

                    if(p==NULL){//head change hoga
                        c->next=n->next;
                        n->next=c;
                        head=p=n;//we have to update p
                        // c update nhi karna woh apne aap hi jaayega aage

                    }
                    else{
                        c->next=n->next;
                        n->next=c;
                        p->next=n;
                        p=n;
                    }
            }
            else{//swapping nhi hogi
                p=c;
                c=n;

            }
            
        }
        tail=c;
    }


}


void printLL(node*head){// call by value
        while(head){
            cout<<head->data<<"-->";
            head=head->next;
        }
        cout<<"NULL";
    }
int main(){
    node*head=NULL,*tail=NULL;

    insertatend(head,tail,4);
    insertatend(head,tail,2);
    insertatend(head,tail,6);
    insertatend(head,tail,3);
   
     printLL(head);
     cout<<endl;
     bubblesort(head,tail);      
    printLL(head);

}