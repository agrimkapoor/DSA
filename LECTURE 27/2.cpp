#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
};
int main() {
    node a,b,c;

    a.data=1;
    b.data=2;
    c.data=3;

    a.next=&b;
    b.next=&c;
    c.next=NULL;

    //PRINT WITH HELP OF FIRST NODE
    cout<<a.data<<"-->";
    cout<<(*(a.next)).data<<"-->";
    cout<<(*(*(a.next)).next).data<<"-->NULL\n";

    //M2 
    cout<<(&a)->data;//bracket lagana hai idhar
    cout<<a.next->data;
    cout<<a.next->next->data;
    // WHEN WE ARE USING ARROW OPERATOR THEN NO NEED OF BRACKETS
    
    return 0;
}