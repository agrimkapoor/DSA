//TREES 
#include<iostream>
#include<queue>
using namespace std;
class node{
public :
    int data;
    node*left;
    node*right;

    node(int d){
        data=d;
        left=right=NULL;
    }
};
//1.FUNCTION TO CREATE OR BUILD A TREE
node*create(){
    //1.user se data ka i/p lo
    int data;//this is alag variable and independent of the data of class node
    cin>>data;
    if(data==-1){
        return NULL;
    }
    //2.create the root node
    node*root=new node(data);
    //3.LST ka kaam recursion karega
    root->left=create();
    //4.RST ka kaam recursion karega
    root->right=create();
    //5.return type of fn is node*
    return root;
}
//2.FUNCTION TO PRINT THE TREE
void preorder(node*root){//CALL BY VALUE : THIS ROOT IS DIFF FROM MAIN FN WAALA ROOT(MAIN FN WAALA ROOT WILL NOT BE AFFECTED)
    if(!root)return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node*root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node*root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
//3.count number of nodes in the tree
int count(node*root){
    if(root==NULL)return 0;
    return 1+count(root->left)+count(root->right);//like preorder
}
//4.calculate height of tree [if only one node then height is 1]
int height(node*root){
    if(root==NULL)return 0;
    return 1+ max(height(root->left),height(root->right));
}
//5. search given key and return address of node
node*search(node*root,int key){
    if(root==NULL)return NULL;
    if(key==root->data){
        return root;
    }
    //find in LST
    node*x=search(root->left,key);
    if(x!=NULL)return x;//agar LST mei mil gaya 
    return search(root->right,key);
}
//6.mirror of a tree
void mirror(node*root){//CALL BY VALUE AS ROOT KA CONTENT IS NOT CHANGING
// WE ARE CHANGING LINKS THESE CHANGES IN CONNECTION WILL REMAIN IN MAIN FN TREE ALSO
    if(root==NULL)return;
    swap(root->left,root->right);//like preorder traversal
    mirror(root->left);
    mirror(root->right);
}
//7.diameter of tree in O(N^2) : max distance b/w 2 nodes[a edge is 1 unit distance]
int diameter(node*root){// O(N^2)
    if(root==NULL)return 0;
    int op1=height(root->left)+height(root->right);
    int op2=diameter(root->left);
    int op3=diameter(root->right);
    return max(op1,max(op2,op3));//max can take only 2 arguements
}

//8.FUNCTON FOR DIAMETER OPTIMISED  APPROACH in O(N)
class Pair{
public:
int height;
int diameter;
};
Pair diameter2(node*root){
    //1.base case
    if(root==NULL)return {0,0};
    //2.recursive case
    Pair left = diameter2(root->left);
    Pair right= diameter2(root->right);
    Pair p;
    p.height=max(left.height ,right.height)+1;
    int op1=left.height +right.height;
    int op2=left.diameter;
    int op3=right.diameter;
    p.diameter=max(op1,max(op2,op3));
    return p;
}
//9.FUNCTION FOR LEVEL ORDER TRAVERSAL
void levelOrder(node*root){
if(root==NULL)return;//THIS CASE KO ALAG SE HANDLE WARNA DO BAAR NULL PUSH HO JATA
queue<node*>q;
q.push(root);
q.push(NULL);
while(!q.empty()){
    node*f=q.front();
    q.pop();
    if(f!=NULL){
        cout<<f->data<<" ";
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
    else{
        cout<<"\n";
        if(!q.empty())q.push(NULL);
    }
}
}
//10.FUNCTION FOR LEVEL ORDER INPUT (M2 OF CREATING A TREE)
node*create2(){
    int data;
    cin>>data;
    if(data==-1)return NULL;
    node*root=new node(data);
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node*f=q.front();
        q.pop();
        int leftchild,rightchild;
        cin>>leftchild>>rightchild;
        if(leftchild!=-1){
            f->left=new node(leftchild);
            q.push(f->left);
        }
        if(rightchild!=-1){
            f->right=new node(rightchild);
            q.push(f->right);
        }

    }
    return root;
}
//11.FUNCTION FOR CREATING A TREE USING PREORDER AND INORDER
    int pre[] = {8 , 10 , 1 , 6 , 4 , 7 , 3 , 14 , 13};
    int k=0;
    int in[] = {1 , 10 , 4 , 6, 7, 8, 3, 13, 14 };
    node*create3(int s,int e){
        //1.base case
        if(s>e)return NULL;
        //2.recursive case
        node*root=new node(pre[k++]);
        int indx=-1;
        for(int j=s;j<=e;j++){
            if(in[j]==root->data){
                indx=j;
                break;
            }
        }
        root->left=create3(s,indx-1);
        root->right=create3(indx+1,e);
        return root;
    }
//12.FUNCTION FOR CREATING A TREE FROM INORDER AND POSTORDER
    int post[]={1, 4, 7, 6, 10, 13, 14, 3, 8};
    int no=sizeof(post)/sizeof(int);
    int l=no-1;
    //inorder pehle hi diya huya hai globally
    node*create4(int s,int e){
         //1.base case
        if(s>e)return NULL;
        //2.recursive case
        node*root=new node(post[l--]);
        int indx=-1;
        for(int j=s;j<=e;j++){
            if(in[j]==root->data){
                indx=j;
                break;
            }
        }
        root->right=create4(indx+1,e);//YEH PEHLE LIKNA HOGA AS POST[] ME LST RST ROOT
        root->left=create4(s,indx-1);
        
        return root;
    }
int main(){
    node*root;//abhi constructor is not called
    root=create2();// create fn jab new node banayega tab constructor is called
    preorder(root);
    cout<<endl;
    cout<<count(root)<<endl;
    cout<<height(root)<<endl;
    cout<<diameter(root)<<endl;
    node*x=search(root,5);
    if(x!=NULL)cout<<x->data<<endl;
    else cout<<"KEY NOT FOUND\n";
    Pair ans=diameter2(root);
    cout<<ans.diameter<<"\n";
    levelOrder(root);

    int n=sizeof(pre)/sizeof(int);
    node*root1=create3(0,n-1);
    postorder(root1);
    cout<<endl;
    node*root2=create4(0,n-1);
    postorder(root1);
    return 0;
}