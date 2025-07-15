// stack
#include <iostream>
#include<stack>//USING STL 
using namespace std;
int main() {
    stack<int>s;
    for(int i=1;i<=4;i++){
    s.push(i);
    }
    
    while(!s.empty()){
        cout<<s.top()<<" ";//return type is int
        s.pop();//void fn so just call
    }
    cout<<endl;
    return 0;
}
