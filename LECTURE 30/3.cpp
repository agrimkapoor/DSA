//BALANCED PARANTHESIS check
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(char *a){
    stack<char>s;
    for(int i=0;a[i];i++){//iterating on the expression
        char ch=a[i];
        switch(ch){
            case '(':
            case '{':
            case '[':
                s.push(ch);
                break;

            case '}':
                if(s.empty() || s.top()!='{') return false;
                 s.pop();
                break;
            case ')':
                if(s.empty() || s.top()!='(') return false;
                 s.pop();
                break;
            case ']':
                if(s.empty() || s.top()!='[') return false;
                 s.pop();
                break;
        }

    }
    return s.empty();
}
int main() {
    char a[]="(a+{b+c}+e*[f*g])";
        if(isBalanced(a)){
            cout<<" expression is balanced";
        }
        else{
             cout<<" expression is not balanced";
        }
    return 0;
}