//HASHMAPS
#include <iostream>
using namespace std;
class node{
public :
    string key;// node mei key bhi store kardo taaki node dekh kar pta chal jaaye 
    int value;
    node*next;

    node(string s,int v){
        key=s;
        value=v;
        next=NULL;
    }
};
class hashmap{
private:
// Avoids Unnecessary Copying

// Passing by value (string s) creates a copy of the string, which increases memory usage and processing time.
// Using const string& avoids this copy, making the function more efficient.
// const ensures that the function cannot modify the original string
    int hashfunction(const string& s){//MAKE THIS FN PRIVATE AS BAHAR SE ACCESS NA HO PAAYE
        //can also string s as arguement here
        int ans=0;
        int mul=1;//37^0
        for(int i=0;i<s.size();i++){
            ans+=((s[i]%ts)*(mul%ts));
            mul=(mul*37);
            mul%=ts;
            ans%=ts;
        }
        return ans%ts;
    }
    void rehashing(){//is fn ko bhi private rakhna
        //1.naya table banana hai
        node**olda=a;
        int oldts=ts;
        cs=0;
        a=new node*[2*ts];
        ts=2*ts;
        for(int i=0;i<ts;i++){
            a[i]=NULL;
        }

        for(int i=0;i<oldts;i++){
            node*head=olda[i];
            while(head!=NULL){
                insert(head->key,head->value);
                node*temp=head;
                head=head->next;
                delete temp;//iss se node delete hoyegi
            }
        }
        delete []olda;//isse array

    }

public :
    node**a;
    int ts;
    int cs;

    hashmap(int t=7){
        a=new node*[ts];
        for(int i=0;i<ts;i++){
            a[i]=NULL;
        }
        ts=t;
        cs=0;
        
    }
    void insert(string key ,int value){//can do const string&key[no overhead in copy and we dont want our orginal to change]
        //1. string waali key ke corresponding hash index ko nikal do
        int hashindex=hashfunction(key);
        //2.ab new node banao
        node*n=new node(key,value);
        //3.links banado
        n->next=a[hashindex];
        a[hashindex]=n;
        //4.increase current size after inserting a node
        cs++;
        //5 check loading factor (condition for rehashing)
        float load_factor=cs/(ts*1.0);
        if(load_factor>=0.6){
            rehashing();
        }
    }
    void print(){
        for(int i=0;i<ts;i++){
            node*head=a[i];
            while(head!=NULL){
                cout<<head->key<<" "<<head->value<<"\n";
                head=head->next;
            }
        }
    }
    node*search(const string&key){
        int hashIndex=hashfunction(key);
        node*head=a[hashIndex];
        while(head!=NULL){
            if(head->key==key)return head;
            head=head->next;
        }
        return NULL;
    }
    int& operator[](string key){//can do const string &key 
        node*ans=search(key);
        if(ans==NULL){
            int g=-1;
            insert(key,g);
            ans=search(key);
            return ans->value;
        }
        else{
            return ans->value;//ye bucket hi return kardo
        }
    }
};
int main() {
hashmap h;
	h.insert("Mango", 100);
	h.insert("Apple", 150);
	h.insert("Kiwi", 50);
	h.insert("Pineapple", 80);
	h.insert("Guava", 70);

	// Insertion
	h["Banana"] = 40;

	// Print
	cout << h["Banana"] << endl;

	// Update
	h["Banana"] = 140;

	h.print();
    return 0;
}