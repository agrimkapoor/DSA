//MIN HEAP
#include <iostream>
#include<vector>//header file for using vector waala stl
using namespace std;
class minheap{
    vector<int>v;
    void heapify(int i){
        int left=2*i;
        int right=2*i+1;
        int mini=i;// Lets assume sabse choti value is on index i
        if(left<v.size() and v[left]<v[i])mini=left;
        
        if(right<v.size()and v[right]<v[mini])mini=right;

        if(mini!=i){
            swap(v[i],v[mini]);
            heapify(mini);
        }
    }
public:
    minheap(){
        v.push_back(-1);//0th index ko use nhi karna
    }
    int top(){
        return v[1];
    }
    void push(int d){
        v.push_back(d);
        //ab heap prop ko theek kardo
        int indx=v.size()-1;
        int p=indx/2;
        while(p>0 and v[p]>v[indx]){
            swap(v[p],v[indx]);
            indx/=2;
            p/=2;
        }
    }
    void pop(){
        swap(v[1],v[v.size()-1]);
        v.pop_back();
        //ab heap prop ko theek kardo
        //HEAPIFY
        heapify(1);
    }
    bool empty(){
        return v.size()==1;
    }

};
int main() {
    minheap h;
    h.push(1);
    h.push(2);
    h.push(3);
    h.push(4);
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }

    return 0;
}