//reverse stack
#include <iostream>
#include<stack>
using namespace std;
void pushbottom(stack<int>&s,int topelement){
    //1.base case
    if(s.empty()){
        s.push(topelement);//jab stack khaali toh topelement stack me daal diya
        return;
    }
    //2.recursive case
    //toh stack ko khaali karna padega
    int top=s.top();
    s.pop();
    pushbottom(s,topelement);
    //ab recursion baaki ke element ko nikalega
    // jab tak base case na aajaye
    //now after base case stack me ek ele jo base case me daala tha
    // now top ko daal do
    s.push(top);
}
void reverseStack(stack <int>&s){
    //1.base case
        if(s.empty()){
            return;
        }

    //2.recursive case
        int topelement=s.top();//store the topmost ele of the initial stack
        s.pop();// we removed the topmost ele
        reverseStack(s);//ab baaki ke stack ke liye karo
        // toh ye call hote rehega 
        // jab tak stack empty
        // usme return // now we come back to case of only one ele in stack

        //now we have to push the top element at bottom
        // so we have to make a fn to push at bottom
        pushbottom(s,topelement);

}
void printStack(stack<int> s) {
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;

}

int main() {

	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	printStack(s);
	reverseStack(s);
	printStack(s);


	return 0;
}