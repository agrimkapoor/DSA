//STL OF LINKED LIST
#include <iostream>
#include<list>//STL FOR LINKED LIST
using namespace std;
int main() {
    list<int>l;//CONTAINER

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(5);

    //FOR EACH
    for(auto d : l){//for each data d belonging to linked list
        cout<<d<<"-->";
    }
    cout<<"NULL\n";

    //ITERATOR
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++){
        cout<<*it<<"-->";
    }  
    cout<<"NULL";   
    cout<<endl;

    //REVERSE ITERATOR : AGAR ULTA PRINT KARNA HO
    list<int>::reverse_iterator it1;// same name of variable nhi ho sakta (iterator is a variable)
    for(it1=l.rbegin();it1 !=l.rend();it1++){
        cout<< *it1<<"-->";
    }
    cout<<"NULL\n";

    return 0;
}