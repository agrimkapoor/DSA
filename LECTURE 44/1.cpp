//TRIES
#include <iostream>
#include <unordered_map>
using namespace std;


class node{
public:
    char ch;
    unordered_map<char,node*>h;
    bool isEnd;
    node(char x){
        ch=x;
        isEnd=false;
    }
};
class Tries{
    void autoSuggestionHelper(node*root ,string ans){
        ans.push_back(root->ch);
        if(root->isEnd)cout<<ans<<endl;

        for(auto p :root->h){
            autoSuggestionHelper(p.second ,ans);
        }
        ans.pop_back();//backtracking
    }
    public:
         node*root;
         Tries(){
            root=new node('\0');
         }

    void addWord(string s){
        node*temp=root;
        for(int i=0;i<s.size();i++){
            char x=s[i];
            if(temp->h.count(x)==0){
                node*t=new node(x);
                temp->h[x]=t;
            }
            temp=temp->h[x];
        }
        temp->isEnd=true;

    }
    // search fn to find bat
    bool searchWord(const string &s){// string ko pass by ref 
    // but if we want ki string change na ho so const

    node*temp=root;
    for(int i=0;i<s.size();i++){
        char x=s[i];
        if(temp->h.count(x)==0){
            return false;
        }
        temp=temp->h[x];
    }
    return temp->isEnd;

    }
    void autosuggestion( string &s){//const nhi karna as helper fn me string will change
         node*temp=root;
        for(int i=0;i<s.size();i++){
        char x=s[i];
        if(temp->h.count(x)==0){
            return ;//only return
        }
        temp=temp->h[x];
        }

        for(auto p :temp->h){
            autoSuggestionHelper(p.second ,s);
        }
    }

};
int main() {
    Tries t;
    t.addWord("hello");
    t.addWord("he");
    t.addWord("bat");
    t.addWord("bam");

    while(1){
        char word [100];
        cin>>word;

        if(t.searchWord(word))cout<<"Present\n";
        else cout<<"Not Present \n";
    }
    return 0;
}
