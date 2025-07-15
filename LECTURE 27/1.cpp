//LINKED LIST
#include <iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
};
int main() {
        node a,b;
        a.data=1;
        b.data=2;
        a.next=&b;
        b.next=0;

        //PRINTING WITH THE HELP OF FIRST NODE
        cout<<a.data<<"-->";
        cout<<(*(a.next)).data<<"-->NULL\n";
        //(a.next)->data is another way
        // pointer ko deref karke object bana diya
        //always use brackets warna precedence ka chakar
        // IF WE DO (*(b.next)).data will give segmentation fault as null ko derefer
        
        //how to print with the help of pointer
        node*head=&a;
        while(head){
            cout<<head->data<<"-->";
            head=head->next;
        }
        cout<<"NULL\n";

    return 0;
}