//circular queue ki implementation by array
#include <iostream>
using namespace std;
class Queue{
    public:
        int *a;
        int n;// we have to maintain size of array taaki jab full ho toh pta chal jaaye
        int f,e,cs;
        Queue(int n=5){
            this->n=n;
            cs=0;
            f=0;
            e=-1;
            a=new int [n];
        }
        void push(int d){
            if(cs<n){
                e=(e+1)%n;
                a[e]=d;
                cs++;
            }
            else{
                cout<<"QUEUE OVERFLOW";
            }
        }
        void pop(){
            if(cs>0){
                f=(f+1)%n;
                cs--;
            }
            else{
                cout<<"QUEUE UNDERFLOW";
            }
        }
        bool empty(){
            return cs==0;
        }
        int front (){// to return the frontmost ele
            return a[f];
        }
};
int main() {
    Queue q;
    for(int i=1;i<=5;i++){
    q.push(i);
    }
    while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
    return 0;
}