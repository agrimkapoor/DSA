//BINARY SEARCH TREE
#include <iostream>
#include <climits>
using namespace std;
class node{
public :
    int data;
    node*left,*right;

    node(int d){
        data=d;
        left=right=NULL;
    }
};
//1.FUNCTION TO CREATE A BST
    node*InsertInBst(node*root,int d){
        //1.base case
        if(root==NULL){
            root=new node(d);
            return root;
        }
        //2.recursive case
        if(d<root->data){
            root->left=InsertInBst(root->left,d);
        }
        else{
            root->right=InsertInBst(root->right,d);
        }
        return root;
    }
    node*create(){
        node*root=NULL;
        int data;
        cin>>data;
        while(data!=-1){
            root=InsertInBst(root,data);
            cin>>data;
        }
        return root;
    }
    void inOrder(node* root) {
	if (!root) return;

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}
//2.PRINT ONLY THOSE IN RANGE K1 TO K2
    void inOrder2(node* root,int k1,int k2) {//inorder mei sorted
	if (!root) return;

	inOrder2(root->left,k1,k2);
	if(root->data>=k1 and root->data<=k2)cout << root->data << " ";
	inOrder2(root->right,k1,k2);
    }
//3.IS THE BST BALANCED
    class Pair{
    public:
    bool balance;
    int height;
    };
    Pair balanced(node*root){
        //1.base case
        if(!root){
            return {true,0};
        }
        //2.recursive case
        Pair left=balanced(root->left);
        Pair right=balanced(root->right);
        Pair p;
        if(left.balance and right.balance and abs(left.height -right.height)<=1)p.balance=true;
        else p.balance=false;
        p.height =max(left.height,right.height)+1;
        return p;
    }
    //4.SEARCH IN BST
    node*search(node*root,int key){
        if(root==NULL)return NULL;
        //root->data toh root must not be null as we cant derefer null
        if(key==root->data)return root;
        else if(key<root->data){
         return search(root->left,key);
        }
        else{
             return search(root->right,key);
        }
       
    }
    //5.IF THE BINARY TREE IS BST OR NOT
    bool isBST(node*root, int mi = INT_MIN, int mx = INT_MAX) {//climits
	if (!root) return  true;
    //actual root ka data can be anythinhg b/w -infinity and infinity
	if (root->data >= mi and root->data <= mx
	        and isBST(root->left, mi, root->data)//ab max value can be root->data
	        and isBST(root->right, root->data, mx)) {
		return  true;
	}
	return false;
}  
    //6.SORTED ARRAY TO BST
    node*createBST(int*a ,int s ,int e){
        //1.base case
        if(s>e)return NULL;
       //2.recursive case
        int mid=(s+e)/2;
        node*root=NULL;
        root=new node(a[mid]);
        root->left =createBST(a,s,mid-1);
        root->right=createBST(a,mid+1,e);
        return root;
    }
    //7.BST TO SORTED LINKED LIST
    class LL{
    public :
        node*head;
        node*tail;
    };
        LL BSTtoLL(node*root){
        //1.base case
        if(root==NULL){
            //M1:
            // LL l;
            // l.head=l.tail=NULL;
            // return l;

            //M2:
            return {NULL,NULL};
        }
        //2.recursive case
        
        //case 1
        if(root->left and root->right){
        LL left = BSTtoLL(root->left);
        LL right= BSTtoLL(root->right);
            left.tail->right=root;
            root->right=right.head;
            return {left.head,right.tail};
        }
        else if(root->left and !root->right){
            LL left = BSTtoLL(root->left);
       
            left.tail->right=root;
            return {left.head,root};
        }
        else if(!root->left and root->right){
          
        LL right=BSTtoLL(root->right);
            root->right=right.head;
            return {root,right.tail};
        }
        else{
            LL ans;
            ans.head=root;
            ans.tail=root;
            return ans;
        }
    }
    void printLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "NULL\n";
}

int main() {
   // 8 3 10 1 6 14 4 7 13 9 -1
	node* root = create();

	
	inOrder(root);
	cout << endl;
	
	
	Pair p = balanced(root);
	if (p.balance) cout << "Balanced\n";
	else cout << "Not Balanced\n";

	cout << p.height << endl;
    LL l = BSTtoLL(root);

	printLL(l.head);


	return 0;
}