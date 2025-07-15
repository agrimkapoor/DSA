//TOP K ELEMENTS
#include <iostream>
#include<queue>//stl for priority queue
using namespace std;
void print(priority_queue<int, vector<int>, greater<int> >h){//didnt pass by ref
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    cout<<endl;
}
int main() {
    //TAKE A PRIORITY QUEUE
    // priority_queue<int> h; // Maxheap
    priority_queue<int,vector<int>,greater<int>>h;//min heap
    //min heap me ham k ele rakhenge
    int k=3;
    int no;
    int i=0;
    while(1){
        cin>>no;
        if(no==-1){
            //print the content of heap
            //print ke liye fn banado
            // call by value
            //taaki main fn waala heap change na ho
            print(h);

            continue;//IMPORTANT
            //YE COND CHECK PE LE AAYEGA
        }
        if(i<k){
            h.push(no);
            i++;
        }
        if(i==k){
            if(no > h.top()){
                h.pop();
                h.push(no);
            }
        }
    }
    return 0;
}